#include "ft_printf.h"
// #include "libft/libft.h"

char *convert_c(char c)
{
    char   *str;
    //printf("\n-- %c --\n", c);
    str = ft_calloc(sizeof(char), 2);
    if (!str)
        return NULL;
    str[0] = c;
    return (str);
}
char *convert_id(int d)
{
    char   *str;
 
    str = ft_itoa(d);
    if (!str)
        return NULL;
    return (str);
}
// char    *convert_p(size_t ptr)
// {
//     char    *str;
//     size_t  tmp;
//     int     i;
//     i = 0;
 
//     if (ptr == SIZE_MAX)
//         return  ((char *)SIZE_MAX);
//     tmp = ptr;
//     while (tmp > 0)
//     {
//         tmp /= 16;
//         i++;
//     }
//     str = ft_calloc(sizeof(char), i + 3 );
//     if (!str)
//         return NULL;
//     i++;
//     str[0] = '0';
//     str[1] = 'x';
//     while (ptr > 0 && i >= 2)
//     {
//         str[i] = "0123456789abcdef"[ptr%16];
//         ptr /= 16;
//         i--;
//     }
//     return str;
// }
size_t     strlen_hex(unsigned long ptr)
{
    size_t  len;

    len = 0;
    while (ptr > 0)
    {
        ptr /= 16;
        len++;
    }
    return (len);
}
char    *convert_base(unsigned long ptr)
{
    char    *str;
    size_t  len;
 
    if (ptr == SIZE_MAX)
        return  ((char *)SIZE_MAX);
    len = strlen_hex(ptr);
    str = ft_calloc(sizeof(char), len + 1);
    if (!str)
        return NULL;
    len--;
    while (ptr > 0 && len >= 0)
    {
        str[len] = "0123456789abcdef"[ptr%16];
        ptr /= 16;
        len--;
    }
    return str;
}
char    *convert_p(unsigned long ptr)
{
    char    *str;

    str = ft_calloc(sizeof(char), strlen_hex(ptr) + 3);
    if (!str)
        return  (NULL);
    str = ft_strjoin("0x", convert_base(ptr));
    return  (str);
}
char    *convert_x(char *fmt, unsigned int x)
{
    char    *str;
  
    str = ft_calloc(sizeof(char), strlen_hex(x) + 1);
    if (!str)
        return  (NULL);
    str = convert_base((unsigned long)x);
    if (*fmt == 'X')
        str =ft_toupper(str);
    return  (str);   
}
char *convert_u(unsigned int u)
{
    char   *str;

    str = ft_itoa_un(u);
    if (!str)
        return NULL;
    return (str);
}
