#include "ft_printf.h"

char *convert_c(char c, t_prnt *spec);
char *convert_id(int d, t_prnt *spec);
char *convert_s(char *str, t_prnt *spec);
size_t     strlen_hex(unsigned long ptr);
char    *convert_base(unsigned long ptr);
char    *convert_p(unsigned long ptr, t_prnt *spec);
char    *convert_x(char *fmt, unsigned int x, t_prnt *spec);
char *convert_u(unsigned int u, t_prnt *spec);

char *convert_c(char c, t_prnt *spec)
{
    char   *str;

    str = ft_calloc(sizeof(char), 2);
    if (!str)
        return NULL;
    str[0] = c;
    spec->str_len = (int)ft_strlen(str);
    spec->type = 'c';
    if (c == 0)
    {
        str[0] = '\0';
        spec->str_len = 1;
    }
    if (spec->width > spec->str_len)
        ft_put_flag(str, spec);
    else
        ft_putchar_fd(*str, 1);
    return (str);
}

char *convert_id(int d, t_prnt *spec)
{
    char   *str;
 
    str = ft_itoa(d);
    if (!str)
        return NULL;
    spec->str_len = (int)ft_strlen(str);
    spec->type = 'd';
    if (d >= 0 && (spec->flag1 == '+' || spec->flag1 == ' '))
    {
        ft_putchar_fd(spec->flag1, 1);
        spec->len++;
    }
    if (spec->pcs == 0 && spec->width == 0 && *str == 0)
            spec->len -= spec->str_len;
    else if (spec->pcs != -2)
        ft_put_pcs(str, spec);
    else if (spec->width > spec->str_len)
        ft_put_flag(str, spec);
    else
        ft_putstr_fd(str, 1);
    return (str);
}
char *convert_s(char *str, t_prnt *spec)
{
    if (!str)
        str = "(null)";
    spec->str_len = (int)ft_strlen(str);
    spec->type = 's';
    if (spec->pcs == 0 && spec->width == 0 && *str == 0)
            spec->len -= spec->str_len;
    else if (spec->pcs != -2)
        ft_put_pcs(str, spec);
    else if (spec->width >= spec->str_len)
    {
        if (spec->flag1 == ' ')
        {
            ft_putchar_fd(spec->flag1, 1);
            spec->len++;
            ft_putstr_fd(str, 1);
        }
        else
            ft_put_flag(str, spec);  
    } 
    else
        ft_putstr_fd(str, 1);
    return (str);
}

size_t     strlen_hex(unsigned long ptr)
{
    size_t  len;

    len = 0;
    while (ptr >= 0)
    {
        ptr /= 16;
        len++;
        if (ptr == 0)
            break;
    }
    return (len);
}
char    *convert_base(unsigned long ptr)
{
    char    *str;
    size_t  len;
 
    len = strlen_hex(ptr);
    str = ft_calloc(sizeof(char), len + 1);
    if (!str)
        return NULL;
    len--;
    if (ptr == 0)
            str[len] = '0';
    while (ptr > 0 && len >= 0)
    {
        str[len] = "0123456789abcdef"[ptr%16];
        ptr /= 16;
        len--;
    }
    return str;
}
char    *convert_p(unsigned long ptr, t_prnt *spec)
{
    char    *str;
    char    *p;

    p = convert_base(ptr);
    str = ft_strjoin("0x", p);
    free(p);
    spec->str_len = (int)ft_strlen(str);
    spec->type = 'p';
    if (spec->pcs == 0 && spec->width == 0 && *str == 0)
        spec->len -= spec->str_len;
    else if (spec->pcs != -2)
        ft_put_pcs(str, spec);
    else if (spec->width > spec->str_len)
        ft_put_flag(str, spec);
    else
        ft_putstr_fd(str, 1);
    return  (str);
}
char    *convert_x(char *fmt, unsigned int x, t_prnt *spec)
{
    char    *str;
    char    *p;

    if (x != 0 && spec->flag1 == '#')
    {
        p = convert_base((unsigned long)x);
        str = ft_strjoin("0x", p);
        free(p);
    }
    else 
    {
        str = convert_base((unsigned long)x);
    }

    if (*fmt == 'X')
        str =ft_toupper(str);
    spec->str_len = (int)ft_strlen(str);
    spec->type = 'x';
    if (spec->flag2 == '0' && spec->pcs < spec->str_len && spec->pcs != -2)
            spec->flag2 = ' ';
    if (spec->pcs != -2 && spec->pcs >= spec->str_len)
    {
        ft_put_pcs(str, spec);
    }
    else if (spec->width >= spec->str_len)
        ft_put_flag(str, spec);
    else
    {
        ft_putstr_fd(str, 1);
    }
    return  (str);   
}
char *convert_u(unsigned int u, t_prnt *spec)
{
    char   *str;

    str = ft_itoa_un(u);
    if (!str)
        return NULL;
    spec->str_len = (int)ft_strlen(str);
    spec->type = 'u';
    if (u > 0 && (spec->flag1 == '+' || spec->flag1 == ' '))
    {
        ft_putchar_fd(spec->flag1, 1);
        spec->len++;
    }
    if (spec->pcs == 0 && spec->width == 0 && *str == 0)
        spec->len -= spec->str_len;
    else if (spec->pcs != -2)
        ft_put_pcs(str, spec);
    else if (spec->width > spec->str_len)
        ft_put_flag(str, spec);
    else
        ft_putstr_fd(str, 1);
    return (str);
}
