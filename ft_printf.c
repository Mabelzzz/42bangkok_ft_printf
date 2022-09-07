#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "convert.c"
#include "libft/libft.h"
#include "../ft_printf_tester/tester.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
void check_type(char *fmt, va_list args)
{
    char *str;
    // fmt++;
    // printf("\n1--%s\n", fmt);
    if (*fmt == 'c' || *fmt == '%') {
        str = convert_c(va_arg (args, int));
    } else if (*fmt == 's') {
        str = va_arg(args, char *);
    } else if (*fmt == 'p') {
        str = convert_c(va_arg (args, size_t));
    } else if (*fmt == 'd' || *fmt == 'i') {
        str = convert_id(va_arg (args, int));
    } else if (*fmt == 'u') {
        str = convert_u(va_arg (args, unsigned int));
    } else if (*fmt == 'x' || *fmt == 'X') {
        str = convert_c(va_arg (args, unsigned int));
    } 
    // fmt++;
    // printf("\n2--%s\n", fmt);
    ft_putstr_fd(str, 1);
}
int printfmt(const char *format, va_list args)
{
    char *fmt;

    fmt = (char *)format;
    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            check_type(fmt, args);
        } 
        else 
        {
            ft_putchar_fd(*fmt, 1);
        }
        fmt++;
    }
    return (0);
}
int ft_printf(const char *fmt, ...)
{
    // char *fmt;
    // fmt = (char *)format;
    va_list args;
    int len;

    if (!fmt)
        return (0);
    va_start(args, fmt);
    len = printfmt(fmt, args);
    va_end(args);

    return len;
}

int main(void) 
{
    char a = 's';
    int b = 89;
    unsigned int c = 90;
    char *s ="Hello";


    //printf("%d", a);
    printf("Print c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
    ft_printf("Test  c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
  
    printf("Print d >> d : %d %d %d %d %d %d %d %d %d %d\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    ft_printf("Test  d >> d : %d %d %d %d %d %d %d %d %d %d\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    printf("Print i >> i : %i %i %i %i %i %i %i %i %i %i\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    ft_printf("Test  i >> i : %i %i %i %i %i %i %i %i %i %i\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    printf("Print s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");
    ft_printf("Test  s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");
  
    return (0);
}