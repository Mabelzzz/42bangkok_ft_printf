#include "ft_printf.h"
// #include "libft/libft.h"

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
    if (*fmt == 'c') 
        str = convert_c(va_arg (args, int));
    else if (*fmt == 's')
        str = va_arg(args, char *);
    else if (*fmt == 'p') 
        str = convert_p(va_arg (args, unsigned long));
    else if (*fmt == 'd' || *fmt == 'i')
        str = convert_id(va_arg (args, int));
    else if (*fmt == 'u') 
        str = convert_c(va_arg (args, unsigned int));
    else if (*fmt == 'x' || *fmt == 'X') 
        str = convert_x(fmt, va_arg (args, unsigned int));
    else 
        str = "%";
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
    // char a = 's';
    // int b = 89;
    // unsigned int c = 90;
    // char *s ="Hello";


    //printf("%d", a);
    // printf("Print c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
    // ft_printf("Test  c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n\n", 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j');
  
    printf("Print d >> d : %d %d %d %d %d %d %d %d %d %d\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    ft_printf("Test  d >> d : %d %d %d %d %d %d %d %d %d %d\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    printf("Print i >> i : %i %i %i %i %i %i %i %i %i %i\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    ft_printf("Test  i >> i : %i %i %i %i %i %i %i %i %i %i\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    printf("Print s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");
    ft_printf("Test  s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");

    printf("Print p >> p : %p %p %p %p \n", "2345608", "7654967", "18446", "9878671");
    ft_printf("Test  p >> p : %p %p %p %p \n", "2345608", "7654967", "18446", "9878671");

    printf("Print x >> x : %x %x %x %x \n", 2345608, 7654967, 18446, 9878671);
    ft_printf("Test  x >> x : %x %x %x %x \n", 2345608, 7654967, 18446, 9878671);

    printf("Print X >> X : %X %X %X %X \n", 2345608, 7654967, 18446, 9878671);
    ft_printf("Test  X >> X : %X %X %X %X \n", 2345608, 7654967, 18446, 9878671);

    printf("Print u >> u : %u %u %u %u \n", 2345608, 7654967, 18446, 9878671);
    ft_printf("Test  u >> u : %u %u %u %u \n", 2345608, 7654967, 18446, 9878671);
  
    printf("\nPrint d : |%-+9.1d|", 25);
    printf("\nPrint d : |%+-9.1d|", 25);
    printf("\nPrint d : |%-1.1d|", 25);
    printf("\nPrint d : |%08.1d|", 25);
    printf("\nPrint d : |%08d|", 25);

    printf("\n\nPrint i : |%-+9.1i|", 25);
    printf("\nPrint i : |%+-9.1i|", 25);
    printf("\nPrint i : |%-1.1i|", 25);
    printf("\nPrint i : |%08.1i|", 25);
    printf("\nPrint i : |%08i|", 25);

    printf("\n\nPrint s : |%9.3s|", "Hi");
    printf("\nPrint s : |%-9.3s|", "Hello");
    printf("\nPrint s : |%-1.1s|", "Hi");
    printf("\nPrint s : |%8.1s|", "Hi");

    printf("\nPrint s : |%.8s|", "abcdefg");
    printf("\nPrint s : |%.3s|", "abcdf");
    printf("\nPrint s : |%.08s|", "abcdefg");
    printf("\nPrint s : |%.03s|", "abcdf");
    printf("\nPrint s : |%.008s|", "abcdefg");
    printf("\nPrint s : |%.003s|", "abcdf");
    
    return (0);
}