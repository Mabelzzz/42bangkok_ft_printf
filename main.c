#include "ft_printf.h"

int main(void) 
{
    // gcc main.c ft_printf.c convert.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_calloc.c ft_itoa.c ft_itoa_un.c ft_strjoin.c ft_toupper.c ft_bzero.c ft_strlcpy.c
    char *a = NULL;
    // char  *b = "\0";
    // int  c = 65;
    // int b = 89;
    // unsigned int c = 90;
    // char *s ="Hello";


    // printf("%d : \n", printf("%s \n", a));
    // ft_printf("%d : \n", printf("%s \n", a));

    printf(" : %d\n", printf("ULONG_MAX %p %p ", ULONG_MAX, ULONG_MAX));;
    ft_printf(" : %d\n", ft_printf("ULONG_MAX %p %p ", ULONG_MAX, ULONG_MAX));

    printf(" : %d\n", printf("LONG_MAX %p %p ", LONG_MAX, -LONG_MAX));;
    ft_printf(" : %d\n", ft_printf("LONG_MAX %p %p ", LONG_MAX, -LONG_MAX));

    printf(" : %d\n", printf("INT_MAX %p %p ", INT_MAX, -INT_MAX));;
    ft_printf(" : %d\n", ft_printf("INT_MAX %p %p ", INT_MAX, -INT_MAX));

    // ft_printf("%d : \n", ft_printf("%s \n", a));
    // printf("%d",printf("Print c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n", 'a', 0, 'c', 'd', 65, 'f', 'g', 'h', 'i', 'j'));
    // printf("%d",ft_printf("Test  c >> c : %c %c %c %c %c %c %c %c %c %c  %% %%\n\n", 'a', 0, 'c', 'd', 65, 'f', 'g', 'h', 'i', 'j'));

    // printf("p: %d \n", printf("%c\n", 0));
    // printf("\n");
    // printf("t: %d \n", ft_printf("%c\n", 0));
    // printf("\n");
    // printf("0 : %d, 1 : %d, 65 : %d \n", ft_printf("%c", 0),ft_printf("%c", 1), ft_printf("%c", 65));
    // printf("\n");
    // printf("0 : %d, 1 : %d, 65 : %d \n", printf("%c", 0),printf("%c", 1), printf("%c", 65));

    // printf("%p\n", printf("Test 5 : %p %c %p \n", a, b, c));
    // ft_printf("%p\n", ft_printf("Test 5 : %p %c %p \n", a, b, c));
    // printf("\n");

    // printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
    // printf("\n");
    // ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
        
	// printf("%d\n", printf("Test 5 : %p %p %p \n", '2', '1', 0));
    // ft_printf("%d\n", ft_printf("Test 5 : %p %p %p \n", '2', '1', 0));
    // printf("\n");

	// printf("%d\n", printf("Test 5 : %p %p %p \n", 0, '1', '2'));
    // ft_printf("%d\n", ft_printf("Test 5 : %p %p %p \n", 0, '1', '2'));
    // printf("Print d >> d : %d %d %d %d %d %d %d %d %d %d\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    // ft_printf("Test  d >> d : %d %d %d %d %d %d %d %d %d %d\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    // printf("Print i >> i : %i %i %i %i %i %i %i %i %i %i\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
    // ft_printf("Test  i >> i : %i %i %i %i %i %i %i %i %i %i\n\n", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101);
  
    // printf("Print s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");
    // ft_printf("Test  s >> s : %s %s %s %s \n", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu");

    // printf("Print p >> p : %p %p %p %p \n", "2345608", "7654967", "18446", "9878671");
    // ft_printf("Test  p >> p : %p \n", "9878671");

    // printf("Print x >> x : %x %x %x %x %x \n", 2345608, 7654967, 18446, 9878671, 0);
    // ft_printf("Test  x >> x : %x %x %x %x %x \n", 2345608, 7654967, 18446, 9878671, 0);

    // printf("Print X >> X : %X %X %X %X %X \n", 2345608, 7654967, 18446, 9878671, 0);
    // ft_printf("Test  X >> X : %X %X %X %X %X \n", 2345608, 7654967, 18446, 9878671, 0);

    // printf("Print u >> u : %u %u %u %u \n", 2345608, 7654967, 18446, 9878671);
    // ft_printf("Test  u >> u : %u %u %u %u \n", 2345608, 7654967, 18446, 9878671);
  
    // printf("\nPrint d : |%-+9.1d|", 25);
    // printf("\nPrint d : |%+-9.1d|", 25);
    // printf("\nPrint d : |%-1.1d|", 25);
    // printf("\nPrint d : |%08.1d|", 25);
    // printf("\nPrint d : |%08d|", 25);

    // printf("\n\nPrint i : |%-+9.1i|", 25);
    // printf("\nPrint i : |%+-9.1i|", 25);
    // printf("\nPrint i : |%-1.1i|", 25);
    // printf("\nPrint i : |%08.1i|", 25);
    // printf("\nPrint i : |%08i|", 25);

    // printf("\n\nPrint s : |%9.3s|", "Hi");
    // printf("\nPrint s : |%-9.3s|", "Hello");
    // printf("\nPrint s : |%-1.1s|", "Hi");
    // printf("\nPrint s : |%8.1s|", "Hi");

    // printf("\nPrint s : |%.8s|", "abcdefg");
    // printf("\nPrint s : |%.3s|", "abcdf");
    // printf("\nPrint s : |%.08s|", "abcdefg");
    // printf("\nPrint s : |%.03s|", "abcdf");
    // printf("\nPrint s : |%.008s|", "abcdefg");
    // printf("\nPrint s : |%.003s|", "abcdf");
    
    return (0);
}