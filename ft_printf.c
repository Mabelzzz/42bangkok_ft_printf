#include "ft_printf.h"
// #include "libft/libft.h"
void check_pcs(char *fmt, t_prnt *spec)
{

}

void check_width(char *fmt, t_prnt *spec)
{
    char    *w;

    if (ft_isdigit(*fmt) == 1)
    {
        while (*fmt != CONVERSION || *fmt != '.')
        {
            *w = *fmt;
            *fmt++;
            *w++;
        }
        if (*fmt == '.')
        {
            *fmt++;
            check_pcs(fmt, spec);
        }
    }
    spec -> width = ft_atoi(*w);
}
//Priority # > + > space
void check_flags1(char *fmt, t_prnt *spec)
{
    int i;
    
    i = 2;
    while (i >= 0)
    {
        if (*fmt == FLAG1[i] || *(fmt + 1) == FLAG1[i] || *(fmt + 2) == FLAG1[i])
            spec -> flag1 = FLAG1[i];
        i--;
    }
    i = 0;
    while (i <= 2)
    {
        if (*fmt == FLAG1[i] || *(fmt + 1) == FLAG1[i] || *(fmt + 2) == FLAG1[i])
        {
            *fmt++;
            spec -> len++;
            i = 0;
        } 
        i++;
    }
    check_flags2(fmt, spec);
}

void check_flags2(char *fmt, t_prnt *spec)
{
    int i;
    
    i = 2;
    while (i >= 0)
    {
        if (*fmt == FLAG2[i] || *(fmt + 1) == FLAG2[i])
            spec -> flag2 = FLAG1[i];
        i--;
    }
    i =  0;
    while (i <= 2)
    {
        if (*fmt == FLAG2[i] || *(fmt + 1) == FLAG2[i])
        {
            *fmt++;
            spec -> len++;
            i = 0;
        } 
        i++;
    }
    // check_width(fmt, args, spec);
}
int check_type(char *fmt, va_list args)
{
    char *str;
    int len;

    if (*fmt == '%')
        str = convert_c('%');
    else if (*fmt == 'c') 
        str = convert_c(va_arg (args, int));
    else if (*fmt == 's')
        str = convert_s(va_arg (args, char *));
    else if (*fmt == 'p') 
        str = convert_p(va_arg (args, unsigned long));
    else if (*fmt == 'd' || *fmt == 'i')
        str = convert_id(va_arg (args, int));
    else if (*fmt == 'u') 
        str = convert_u(va_arg (args, unsigned int));
    else if (*fmt == 'x' || *fmt == 'X') 
        str = convert_x(fmt, va_arg (args, unsigned int));
    else 
        str = "";
        
    if (!str)
        str = "(null)";
    if (*fmt == 'c' || *fmt == '%')
        ft_putchar_fd(*str, 1);
    else
        ft_putstr_fd(str, 1);
    len = (int)ft_strlen(str);
    if (*str == '\0' && *fmt == 'c')
        len = 1;
    if (*fmt != 's') 
        free(str);
    return (len);
}
int printfmt(const char *format, va_list args, t_prnt *spec)
{
    char *fmt;

    spec -> len = 0;
    fmt = (char *)format;
    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            check_flags1(fmt, spec);
        } 
        else 
        {
            ft_putchar_fd(*fmt, 1);
            spec -> len++;
        }
        fmt++;
    }
    return (spec -> len);
}
int ft_printf(const char *fmt, ...)
{
    // char *fmt;
    // fmt = (char *)format;
    va_list args;
    t_prnt *spec;
    int len;

    if (!fmt)
        return (0);
    va_start(args, fmt);
    len = printfmt(fmt, args, spec);
    va_end(args);

    return len;
}
