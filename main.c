 #include "ft_printf.h"
#include <unistd.h>

// void	ft_ultimate_ft(int *********nbr)
// {
// 	*********nbr = 43;
// }

// void	ft_ft(int *nbr)
// {
// 	*nbr = 42;
// }


int main(void) 
{
    char *a = "abcd";
    char *b = "01234567";
    char *c = "0123456789";


    //    ft_printf("%d\n", ft_printf(" | %.1s| |%.1s | |%.s| |%.s| \n", "", "", "", "-"));
    //          printf("%d\n", printf(" | %.1s| |%.1s | |%.s| |%.s| \n", "", "", "", "-"));
    
    // p > w 
    // printf("%d\n", ft_printf(" |%-03.4s| |%-3.5s| |%03.6s| |%-04.5s| |%4.6s| |%4.7s| ", a, a, a, a, a, a));
    // printf("%d\n", printf(" |%-03.4s| |%-3.5s| |%03.6s| |%-04.5s| |%4.6s| |%4.7s| ", a, a, a, a, a, a));
    // // ft_printf(" |%.3s|\n", a);
    // printf("\n");
    // printf(" |%.3s|\n", a);

    // w > p 
    // printf("%d\n", ft_printf(" |%.3s| |%-5.3s| |%-6.3s| |%05.4s| |%06.4s| |%07.4s| ", a, a, a, a, a, a));
    // printf("%d\n", printf(" |%.3s| |%-5.3s| |%-6.3s| |%05.4s| |%06.4s| |%07.4s| ", a, a, a, a, a, a));
 
    // ft_printf("%06d", -16);
    // printf("\n");
    // printf("%06d\n", -16);

    // ft_putstr_fd(&str[1], 1);
    // printf("\n");
    // printf("%s",&str[1]);
    
    // int nbr = 21;
    // int *a1;
    // int **a2;
    // int ***a3;
    // int ****a4;
    // int *****a5;
    // int ******a6;
    // int *******a7;
    // int ********a8;
    // int *********a9;

    // a1 = &nbr;
    // ft_ft(a1);
    // printf("%d\n", nbr);
    
    // a2 = &a1;
    // a3 = &a2;
    // a4 = &a3;
    // a5 = &a4;
    // a6 = &a5;
    // a7 = &a6;
    // a8 = &a7;
    // a9 = &a8;
    // ft_ultimate_ft(a9);
    // printf("%d\n", nbr);
    // ft_printf("%12.67s\n", "hayyy");
    // ft_printf("%12s\n", "hayy");
//     printf("a");
    // char *fmt = "23.34";
//     char *width;
//     char *pcs;
//     printf("b");
//    while (ft_isdigit((int)*fmt) == 1 && *fmt != 0)
//     {
//         *(width++) = *(fmt++);
//         // *fmt++;
//         // *width++;
//     }  
//         printf("c"); 
//     if (*fmt == '.')
//     {
//         // *fmt++
//         while (ft_isdigit((int)*fmt) == 1 && *fmt != 0)
//         {
//             *(pcs++) = *(fmt++);
//             // *fmt++;
//             // *pcs++;
//         }
//     }
//     if (!width || !pcs)
//     {
//         // spec -> width = ft_atoi(width);
//         // spec -> pcs = ft_atoi(*pcs);
//         printf("w : %s /n", width);
//         printf("w : %s /n", pcs);
//         printf("w : %d /n", ft_atoi(width));
//         printf("w : %d /n", ft_atoi(pcs));
//     }
    // gcc main.c ft_printf.c convert.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c ft_calloc.c ft_itoa.c ft_itoa_un.c ft_strjoin.c ft_toupper.c ft_bzero.c ft_strlcpy.c check.c ft_isdigit.c ft_atoi.c
    //  char *a = "GETher";
    // char  *b = "\0";
    // int  c = 65;
    // int b = 89;
    // unsigned int c = 90;
    // char *s ="Hello";
    // printf("nbr : %d \n", ft_atoi("02346ty"));
//    printf("%7.0s\n", "Hello");
//     printf("%7s\n", "Hello");
//     ft_printf("|%+ d| --  ", 42);
//     printf("|%+ d| \n", 42);

//     ft_printf("|% +d| --  ", 42);
//     printf("|% +d| \n", 42);

//     ft_printf("|%+d| --  ", 42);
//     printf("|%+d| \n", 42);

//     ft_printf("|% d| --  ", 42);
//     printf("|% d| \n", 42);

//     ft_printf("|%+ d| --  ", -42);
//     printf("|%+ d| \n", -42);

//     ft_printf("|% +d| --  ", -42);
//     printf("|% +d| \n", -42);

//     ft_printf("|%+d| --  ", -42);
//     printf("|%+d| \n", -42);
   
  
//     ft_printf("|% d| --  ", 42);
//     printf("|% d| \n", 42);
//     printf("%d|\n|",count_nbr(123456));
//     printf("%3.7s \n", "Hello");
//     ft_printf("%1s \n", a);
//     ft_printf("%12s \n", a);
//     ft_printf("%12.3s \n", "Hello"); 

//     // printf(" : %d\n", printf("ULONG_MAX %p %p ", ULONG_MAX, ULONG_MAX));;
//     // ft_printf(" : %d\n", ft_printf("ULONG_MAX %p %p ", ULONG_MAX, ULONG_MAX));

//     // printf(" : %d\n", printf("LONG_MAX %p %p ", LONG_MAX, -LONG_MAX));;
//     // ft_printf(" : %d\n", ft_printf("LONG_MAX %p %p ", LONG_MAX, -LONG_MAX));

//     // printf(" : %d\n", printf("INT_MAX %p %p ", INT_MAX, -INT_MAX));;
//     // ft_printf(" : %d\n", ft_printf("INT_MAX %p %p ", INT_MAX, -INT_MAX));

//     ft_printf("%d : \n", ft_printf("%s \n", a));
   

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
        
// 	printf("%d\n", printf("Test 5 : %p %p %p \n", '2', '1', 0));
//     ft_printf("%d\n", ft_printf("Test 5 : %p %p %p \n", '2', '1', 0));
//     printf("\n");

// 	printf("%d\n", printf("Test 5 : %p %p %p \n", 0, '1', '2'));
    // ft_printf("%d\n", ft_printf("Test 5 : %p %p %p \n", 0, '1', '2'));
	// ft_printf("len : %d\n", ft_printf("|%05d| |%4d|", -2, -12));
	// printf("len : %d\n", printf("|%05d| |%4d|", -2, -12));
    // printf("len : %d\n", printf("Print d >> d : |%05d| |%4d| %4d %1d %2d %d %d %d %d %d", -2, -35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101));
    // ft_printf("len : %d\n", ft_printf("Test  d >> d : |%05d| |%4d| %4d %1d %2d %d %d %d %d %d", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101));
  
    // printf("len : %d\n", printf("Print i >> i : |%05i| |%-4i| %i4 %1i %2i %i %i %i %i %i", -2, -35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101));
    // ft_printf("len : %d\n", ft_printf("Test  i >> i : |%05i| |%4i| %i4 %1i %2i %i %i %i %i %i", 2, 35, 645, 13805, -9, -56, -74709, -9806544, -9657, -101));
  
    // printf("len : %d\n", printf("Print s >> s : |%09s| |%16s| %s %s ", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu"));
    // ft_printf("len : %d\n", ft_printf("Test  s >> s : |%09s| |%16s| %s %s ", "Hello!!", " Where r u noww ", "come mon plzz.. ", " -+1234567890-uuuyouuu"));

    // printf("len : %d\n", printf("Print p >> p : |%09p| |%14p| %p %p ", "2345608", "7654967", "18446", "9878671"));
    // ft_printf("len : %d\n", ft_printf("Print p >> p : |%09p| |%14p| %p %p ", "2345608", "7654967", "18446", "9878671"));

    // printf("len : %d\n", printf("Print x >> x : |%09x| |%14x| %x %x %x ", 2345608, 7654967, 18446, 9878671, 0));
    // ft_printf("len : %d\n", ft_printf("Test  x >> x : |%09x| |%14x| %x %x %x ", 2345608, 7654967, 18446, 9878671, 0));

    // printf("len : %d\n", printf("Print X >> X : |%09X| |%14X| %X %X %X ", 2345608, 7654967, 18446, 9878671, 0));
    // ft_printf("len : %d\n", ft_printf("Test  X >> X : |%09X| |%14X| %X %X %X ", 2345608, 7654967, 18446, 9878671, 0));

    // printf("len : %d\n", printf("Print u >> u : |%09u| |%9u| %u %u ", 2345608, 7654967, 18446, 9878671));
    // ft_printf("len : %d\n", ft_printf("Test  u >> u : |%09u| |%9u| %u %u ", 2345608, 7654967, 18446, 9878671));
  
//     // printf("\nPrint d : %d", 25);
//     // printf("\nPrint d : |%+-9.1d|", 25);
//     // printf("\nPrint d : |%-1.1d|", 25);
//     // printf("\nPrint d : |%08.1d|", 25);
//     // printf("\nPrint d : |%08d|", 25);
//     // printf("\nPrint d : |%08d|", 25);

//     // printf("\n\nPrint i : |%-+9.1i|", 25);
//     // printf("\nPrint i : |%+-9.1i|", 25);
//     // printf("\nPrint i : |%-1.1i|", 25);
//     // printf("\nPrint i : |%08.1i|", 25);
//     // printf("\nPrint i : |%08i|", 25);

//     // printf("\n\nPrint s : |%9.3s|", "Hi");
//     // printf("\nPrint s : |%-9.3s|", "Hello");
//     // printf("\nPrint s : |%-1.1s|", "Hi");
//     // printf("\nPrint s : |%8.1s|", "Hi");

//     // printf("\nPrint s : |%.8s|", "abcdefg");
//     // printf("\nPrint s : |%.3s|", "abcdf");
//     // printf("\nPrint s : |%.08s|", "abcdefg");
//     // printf("\nPrint s : |%.03s|", "abcdf");
//     // printf("\nPrint s : |%.008s|", "abcdefg");
//     // printf("\nPrint s : |%.003s|", "abcdf");

    // printf(" |%d\n", printf("%3s", NULL));
	// printf(" |%d\n", printf(" %5.2s", NULL));

	// printf(" |%d\n", printf("|%.1s| ", ""));
	// ft_printf(" |%d\n", ft_printf("|%.1s| ", ""));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.s| ", ""));
// 	ft_printf(" |%d\n", ft_printf(" |%.s| ", ""));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.s| ", "-"));
// 	ft_printf(" |%d\n", ft_printf(" |%.s| ", "-"));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.2s| ", ""));
// 	ft_printf(" |%d\n", ft_printf(" |%.2s| ", ""));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.1s| ", "-"));
// 	ft_printf(" |%d\n", ft_printf(" |%.1s| ", "-"));
	// printf("|%d|\n", printf(" |%.1s|", " - "));
	// ft_printf("|%d|\n", ft_printf(" |%.1s|", " - "));

	// printf("|%d|\n", printf(" |%.1s| |%.2s| |%.3s| |%.4s| \n", " - ", "", "4", ""));
	// ft_printf("|%d|\n", ft_printf(" |%.1s| |%.2s| |%.3s| |%.4s| \n", " - ", "", "4", ""));

	// printf("|%d|\n", printf(" |%.2s| |%.3s| |%.4s| |%.5s| |%.1s| \n", " - ", "", "4", "", "2 "));
	// ft_printf("|%d|\n", ft_printf(" |%.2s| |%.3s| |%.4s| |%.5s| |%.1s| \n", " - ", "", "4", "", "2 "));
	// ft_printf("|%d|\n", ft_printf("%0014.2i%020i%0002.i%000.5i", (int)-2147483648, 3,30, -1));
	// printf("|%d|\n",  printf("%0014.2i%020i%0002.i%000.5i", (int)-2147483648, 3,30, -1));

	// ft_printf("|%d|\n", ft_printf("%01.0i", -4));
	// printf("|%d|\n",  printf("%01.0i", -4));

// 	ft_printf("|%d|\n", ft_printf("%0014.2d%020d%0002.d%000.5d", (int)-2147483648, 3,30, -1));
// 	printf("|%d|\n",  printf("%0014.2d%020d%0002.d%000.5d", (int)-2147483648, 3,30, -1));
//   printf("-------------6\n");
// 	ft_printf("|%d|\n", ft_printf("%01.0d", -4));
// 	printf("|%d|\n",  printf("%01.0d", -4));
//   printf("-------------5\n");
// 	ft_printf("|%d|\n", ft_printf("%-15.15X", 0));
// 	printf("|%d|\n",  printf("%-15.15X", 0));
//   printf("-------------5\n");
// 	ft_printf("|%d|\n", ft_printf("%-15.2X", 4560));
// 	printf("|%d|\n",  printf("%-15.2X", 4560));
//   printf("-------------4\n");
// 	ft_printf("|%d|\n", ft_printf("%015.20x", 20));
// 	printf("|%d|\n", printf("%015.20x", 20));
// printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("%-0014.2X", 1));
// 	printf("|%d|\n", printf("%-0014.2X", 1));
//   printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("%.0u", (unsigned int)-13));
// 	printf("|%d|\n", printf("%.0u", (unsigned int)-13));

// 	printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("%.0uis a big number", (unsigned int)-1));
// 	printf("|%d|\n", printf("%.0uis a big number", (unsigned int)-1));
//   ft_printf("%10.1s\n", "21-school.ru");
//   printf("%10.1s\n", "21-school.ru");
//   printf("-------------1\n");
// 	ft_printf("|%d|\n", ft_printf("%10.1s", "21-school.ru"));
// 	printf("|%d|\n", printf("%10.1s", "21-school.ru"));
// printf("-------------1\n");
	ft_printf("|%-5.7s|\n", "us");
	printf("|%-5.7s|\n", "us");
printf("-------------2\n");
	ft_printf("|%d|\n", ft_printf("|%-5.7s|", "us"));
	printf("|%d|\n", printf("|%-5.7s|", "us"));

printf("-------------3\n");
	ft_printf("|%d|\n", ft_printf("%--4.1s %s %------------------9.3s of %s of %-5.7s", "for", "the", "goooood", "aaall", "us"));
	printf("|%d|\n", printf("%--4.1s %s %------------------9.3s of %s of %-5.7s", "for", "the", "goooood", "aaall", "us"));

// printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("%-15.15d", (int)-2147483648));
// 	printf("|%d|\n", printf("%-15.15d", (int)-2147483648));

// printf("-------------4\n");
// 	ft_printf("|%d|\n", ft_printf("%-15.15i", (int)-2147483648));
// 	printf("|%d|\n", printf("%-15.15i", (int)-2147483648));

// printf("-------------5\n");
// 	ft_printf("|%d|\n", ft_printf("%020.20d", -42000));
// 	printf("|%d|\n", printf("%020.20d", -42000));

// printf("-------------6\n");
// 	ft_printf("|%d|\n", ft_printf("%020.20i", -42000));
// 	printf("|%d|\n", printf("%020.20i", -42000));
// 	printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("%.10uis a big number", (unsigned int)-1));
// 	printf("|%d|\n", printf("%.10uis a big number", (unsigned int)-1));
//   printf("-------------3\n");
// 	ft_printf("|%d|\n", ft_printf("the number is %.13u", (unsigned int)-1));
// 	printf("|%d|\n", printf("the number is %.13u", (unsigned int)-1));
//   printf("-------------3\n");
// 	ft_printf("%042.2X\n", 42000);
// 	printf("%042.2X\n", 42000);
//  printf("-------------4\n");
// 	ft_printf("|%d|\n", ft_printf("%-15.1X", 20));
// 	printf("|%d|\n", printf("%-15.1X", 20));
//   printf("-------------3\n");
	// ft_printf("|%d|\n", ft_printf("%-15.5d", 10));
	// printf("|%d|\n", printf("%-15.5d", 10));
//   printf("-------------2\n");
// 	ft_printf("|%d|\n",ft_printf("%020.19i", -42000));
// 	printf("|%d|\n", printf("%020.19i", -42000));
//   printf("-------------1\n");
// 	ft_printf("|%d|\n",ft_printf("%020.19d", -42000));
// 	printf("|%d|\n", printf("%020.19d", -42000));
// 	ft_printf("|%d|\n",ft_printf("%01.0d", 0));
// 	printf("|%d|\n", printf("%01.0d", 0));

// 	ft_printf("|%d|\n",ft_printf("%01.0x", 0));
// 	printf("|%d|\n", printf("%01.0x", 0));

// 	ft_printf("|%d|\n", ft_printf("%15.15x", -1));
// 	printf("|%d|\n", printf("%15.15x", -1));

// 	ft_printf("|%d|\n", ft_printf("%015.15x", -1));
// 	printf("|%d|\n", printf("%015.15x", -1));

// 	ft_printf("|%d|\n", ft_printf("%-15.5x", 5000));
// 	printf("|%d|\n", printf("%-15.5x", 5000));

// ft_printf("|%d|\n", ft_printf("%15.5x", 5000));
// 	printf("|%d|\n", printf("%15.5x", 5000));

// 	ft_printf("|%d|\n", ft_printf("%015.5x", 5000));
// 	printf("|%d|\n", printf("%015.5x", 5000));
	// ft_printf("|%d|\n", ft_printf("|%01.0X|", 4));
	// printf("|%d|\n", printf("|%01.0X|", 4));

 	// ft_printf("|%d|\n", ft_printf("|%01.0X|", 0));
	// printf("|%d|\n", printf("|%01.0X|", 0));
	// ft_printf("|%02.0X|\n", 0);
	// printf("|%02.0X|\n", 0);

	//   ft_printf("%0014.2X%020X%0002.X%000.5X\n", -1, 3, 30, -1);
	//    printf("%0014.2X%020X%0002.X%000.5X\n", -1, 3, 30, -1);
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.3s| ", " - "));
// 	ft_printf(" |%d\n", ft_printf(" |%.3s| ", " - "));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.2s| ", ""));
// 	ft_printf(" |%d\n", ft_printf(" |%.2s| ", ""));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.1s| |%.2s| |%.3s| |%.4s| ", " - ", "", "4", ""));
// 	ft_printf(" |%d\n", ft_printf(" |%.1s| |%.2s| |%.3s| |%.4s| ", " - ", "", "4", ""));
//   printf("-------------\n");
// 	printf(" |%d\n", printf(" |%.2s| |%.3s| |%.4s| |%.5s| |%.1s| ", " - ", "", "4", "", "2 "));
// 	ft_printf(" |%d\n", ft_printf(" |%.2s| |%.3s| |%.4s| |%.5s| |%.1s| ", " - ", "", "4", "", "2 "));
	
    printf("-------------\n");


	// printf(" |%d\n", printf(" %.1d ", 0));
	// ft_printf(" |%d\n", ft_printf("m|%5.4d| ", -12));
	// printf(" |%d\n", printf(" |%5.4d| ", -12));
	// ft_printf(" |%d\n", ft_printf("m|%4.5d| ", -346));
	// printf(" |%d\n", printf(" |%4.5d| ", -346));
	// ft_printf(" |%d\n", ft_printf("|% 042.2x|", 42000));
	// printf(" |%d\n", printf("|% 042.2x|", 42000));
	// ft_printf(" |%d\n", ft_printf("|%03.0x|", 0));
	// printf(" |%d\n", printf("|%03.0x|", 0));

	// ft_printf("%012x, %20x, %2x, %000042x", -1, 3, 30, -1);
	// printf("%012x, %20x, %2x, %000042x", -1, 3, 30, -1);
// 	printf(" |%d\n", printf("|%4.7s|", "Hel"));
// 	printf(" |%d\n", printf("|%4.7d|", -13));
// 	printf(" |%d\n", printf("|%4.7d|", 13));
// 	printf(" |%d\n", printf("|%4.7i|", -13));
// 	printf(" |%d\n", printf("|%4.7u|", 123));
// 	printf(" |%d\n", printf("|%4.7p|", 12));
// 	printf(" |%d\n", printf("|%4.7x|", 12));

// printf("------------------\n\n");
// 	printf(" |%d\n", printf("|%04.7s|", "Hel"));
// 	printf(" |%d\n", printf("|%04.7d|", -13));
// 	printf(" |%d\n", printf("|%04.7d|", 13));
// 	printf(" |%d\n", printf("|%04.7i|", -13));
// 	printf(" |%d\n", printf("|%04.7u|", 123));
// 	printf(" |%d\n", printf("|%04.7p|", 12));
// 	printf(" |%d\n", printf("|%04.7x|", 12));

////mee pcs
// printf("------------------\n\n"); // l < p < w , fl = 0
// 	printf(" |%d\n", printf("|%07.4s|", "Hel"));
// 	printf(" |%d\n", printf("|%07.4d|", 13));
// 	printf(" |%d\n", printf("|%07.4d|", 13));
// 	printf(" |%d\n", printf("|%07.4i|", -13));
// 	printf(" |%d\n", printf("|%07.4u|", 123));
// 	printf(" |%d\n", printf("|%07.4p|", 16));
// 	printf(" |%d\n", printf("|%07.4x|", 12));
// printf("------------------\n\n"); // l < p < w , fl = 0
// 	ft_printf(" |%d\n", ft_printf("|%07.4s|", "Hel"));
// 	ft_printf(" |%d\n", ft_printf("|%07.4d|", 13));
// 	ft_printf(" |%d\n", ft_printf("|%07.4d|", 13));
// 	ft_printf(" |%d\n", ft_printf("|%07.4i|", -13));
// 	ft_printf(" |%d\n", ft_printf("|%07.4u|", 123));
// 	ft_printf(" |%d\n", ft_printf("|%07.4p|", 16));
	// ft_printf(" |%d\n", ft_printf("|%07.4x|", 12));
// printf("------------------\n\n"); // l < p < w , fl = '!'
// 	printf(" |%d\n", printf("|%7.4s|", "Hel"));
// 	printf(" |%d\n", printf("|%7.4d|", -13));
// 	printf(" |%d\n", printf("|%7.4d|", 13));
// 	printf(" |%d\n", printf("|%7.4i|", -13));
// 	printf(" |%d\n", printf("|%7.4u|", 123));
// 	printf(" |%d\n", printf("|%7.4p|", 12));
// 	printf(" |%d\n", printf("|%7.4x|", 12));
// printf("------------------\n\n"); // l < p < w , fl = '!'
// 	ft_printf(" |%d\n", ft_printf("|%7.4s|", "Hel"));
// 	ft_printf(" |%d\n", ft_printf("|%7.4d|", -13));
// 	ft_printf(" |%d\n", ft_printf("|%7.4d|", 13));
// 	ft_printf(" |%d\n", ft_printf("|%7.4i|", -13));
// 	ft_printf(" |%d\n", ft_printf("|%7.4u|", 123));
// 	ft_printf(" |%d\n", ft_printf("|%7.4p|", 12));
// 	ft_printf(" |%d\n", ft_printf("|%7.4x|", 12));
// printf("------------------\n\n"); // l < p < w , fl = '-'
// 	printf(" |%d\n", printf("|%-7.4s|", "Hel"));
// 	printf(" |%d\n", printf("|%-7.4d|", -13));
// 	printf(" |%d\n", printf("|%-7.4d|", 13));
// 	printf(" |%d\n", printf("|%-7.4i|", -13));
// 	printf(" |%d\n", printf("|%-7.4u|", 123));
// 	printf(" |%d\n", printf("|%-7.4p|", 12));
// 	printf(" |%d\n", printf("|%-7.4x|", 12));
// 	printf("------------------\n\n"); // l < p < w , fl = '-'
// 	printf(" |%d\n", printf("|%--07.4s|", "Hel"));
// 	printf(" |%d\n", printf("|%--07.4d|", -13));
// 	printf(" |%d\n", printf("|%--07.4d|", 13));
// 	printf(" |%d\n", printf("|%--07.4i|", -13));
// 	printf(" |%d\n", printf("|%--07.4u|", 123));
// 	printf(" |%d\n", printf("|%--07.4p|", 12));
// 	printf(" |%d\n", printf("|%--07.4x|", 12));

	// printf(" |%d\n", printf("|%4s|", "Hel"));
	// printf(" |%d\n", printf("|%4d|", -13));
	// printf(" |%d\n", printf("|%4d|", 13));
	// printf(" |%d\n", printf("|%4i|", -13));
	// printf(" |%d\n", printf("|%4u|", 123));
	// printf(" |%d\n", printf("|%4p|", 12));
	// printf(" |%d\n", printf("|%4x|", 12));
	// printf(" |%d\n", printf("|%4p|", 12));
	// printf(" |%d\n", printf("|%4x|", 12));

	// printf(" |%d\n", printf("|%2s|", "Hel"));
	// printf(" |%d\n", printf("|%2d|", -18673));
	// printf(" |%d\n", printf("|%2d|", 1379));
	// printf(" |%d\n", printf("|%2i|", -1673));
	// printf(" |%d\n", printf("|%2u|", 125433));
	// printf(" |%d\n", printf("|%2p|", 13452));
	// printf(" |%d\n", printf("|%2x|", 134442));
	// printf(" |%d\n", printf("|%2p|", 134442));
	// printf(" |%d\n", printf("|%2x|", 134442));
	// printf(" |%d\n", printf(" %0.0X ", -1));
	//  ft_printf(" |%d\n", ft_printf("m%5.2d ", 1));
	// printf(" |%d\n", printf(" %5.2d ", 1));
	// ft_printf(" |%d\n", ft_printf("m%2.3d ", 1));
	// printf(" |%d\n", printf(" %2.3d ", 1));
	//  ft_printf(" |%d\n", ft_printf("m%2.2d ", 1));
	// printf(" |%d\n", printf(" %2.2d ", 1));
    // ft_printf(" |%d\n", ft_printf("m%.2d ", 1));
	// printf(" |%d\n", printf(" %.2d ", 1));
	// ft_printf(" |%d\n", ft_printf("m%.2d ", 1));
	// printf(" |%d\n", printf(" %.2d ", 1));
	// printf(" |%d\n", printf(" %.1d ", 9));
	// printf(" |%d\n", printf(" %.2d ", 10));
	// printf(" |%d\n", printf(" %.3d ", 11));
	// printf(" |%d\n", printf(" %.4d ", 15));
	// printf(" |%d\n", printf(" %.5d ", 16));
	// printf(" |%d\n", printf(" %.6d ", 17));
	// printf(" |%d\n", printf(" %.1d ", 99));
	// printf(" |%d\n", printf(" %.2d ", 100));
	// printf(" |%d\n", printf(" %.3d ", 101));
	// printf(" |%d\n", printf(" %.1d ", -9));
	// printf(" |%d\n", printf(" %.2d ", -10));
	// ft_printf(" |%d\n", ft_printf("m%.3d ", -11));
    // printf(" |%d\n", printf(" %.3d ", -11));
	// ft_printf(" |%d\n", ft_printf("m%.4d ", -14));
    // printf(" |%d\n", printf(" %.4d ", -14));
	// printf(" |%d\n", printf(" %.1d ", -15));
	// printf(" |%d\n", printf(" %.2d ", -16));
	// printf(" |%d\n", printf(" %.3d ", -99));
	// printf(" |%d\n", printf(" %.3d ", -100));
	// printf(" |%d\n", printf(" %.4d ", -101));
	// printf(" |%d\n", printf(" %.8d ", INT_MAX));
	// printf(" |%d\n", printf(" %.9d ", INT_MIN));
	// printf(" |%d\n", printf(" %.10d ", LONG_MAX));
	// printf(" |%d\n", printf(" %.11d ", LONG_MIN));
	// printf(" |%d\n", printf(" %.12d ", UINT_MAX));
	// printf(" |%d\n", printf(" %.13d ", ULONG_MAX));
	// printf(" |%d\n", printf(" %.14d ", 9223372036854775807LL));
	// printf(" |%d\n", printf(" %.8d %.9d %.10d %.11d %.12d %.13d %.14d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	// printf("-------------\n");


    // printf(" |%d\n", printf(" %.1i ", 0));
	// printf(" |%d\n", printf(" %.2i ", -1));
	// printf(" |%d\n", printf(" %.2i ", 1));
	// printf(" |%d\n", printf(" %.1i ", 9));
	// printf(" |%d\n", printf(" %.2i ", 10));
	// printf(" |%d\n", printf(" %.3i ", 11));
	// printf(" |%d\n", printf(" %.4i ", 15));
	// printf(" |%d\n", printf(" %.5i ", 16));
	// printf(" |%d\n", printf(" %.6i ", 17));
	// printf(" |%d\n", printf(" %.1i ", 99));
	// printf(" |%d\n", printf(" %.2i ", 100));
	// printf(" |%d\n", printf(" %.3i ", 101));
	// printf(" |%d\n", printf(" %.1i ", -9));
	// printf(" |%d\n", printf(" %.2i ", -10));
	// printf(" |%d\n", printf(" %.3i ", -11));
	// printf(" |%d\n", printf(" %.4i ", -14));
	// printf(" |%d\n", printf(" %.1i ", -15));
	// printf(" |%d\n", printf(" %.2i ", -16));
	// printf(" |%d\n", printf(" %.3i ", -99));
	// printf(" |%d\n", printf(" %.3i ", -100));
	// printf(" |%d\n", printf(" %.4i ", -101));
	// printf(" |%d\n", printf(" %.8i ", INT_MAX));
	// printf(" |%d\n", printf(" %.9i ", INT_MIN));
	// printf(" |%d\n", printf(" %.10i ", LONG_MAX));
	// printf(" |%d\n", printf(" %.11i ", LONG_MIN));
	// printf(" |%d\n", printf(" %.12i ", UINT_MAX));
	// printf(" |%d\n", printf(" %.13i ", ULONG_MAX));
	// printf(" |%d\n", printf(" %.14i ", 9223372036854775807LL));
	// printf(" |%d\n", printf(" %.8i %.9i %.10i %.11i %.12i %.13i %.14i", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	// printf("-------------\n");
	// printf(" |%d\n", printf(" %.1u ", 0));
	// printf(" |%d\n", printf(" %.2u ", -1));
	// printf(" |%d\n", printf(" %.2u ", 1));
	// printf(" |%d\n", printf(" %.1u ", 9));
	// printf(" |%d\n", printf(" %.2u ", 10));
	// printf(" |%d\n", printf(" %.3u ", 11));
	// printf(" |%d\n", printf(" %.4u ", 15));
	// // TEST(75, print(" %.5u ", 16));
	// // TEST(76, print(" %.6u ", 17));
	// // TEST(77, print(" %.1u ", 99));
	// // TEST(78, print(" %.2u ", 100));
	// // TEST(79, print(" %.3u ", 101));
	// // TEST(80, print(" %.1u ", -9));
	// // TEST(81, print(" %.2u ", -10));
	// // TEST(82, print(" %.3u ", -11));
	// // TEST(83, print(" %.4u ", -14));
	// // TEST(84, print(" %.1u ", -15));
	// // TEST(85, print(" %.2u ", -16));
	// // TEST(86, print(" %.3u ", -99));
	// // TEST(87, print(" %.3u ", -100));
	// // TEST(88, print(" %.4u ", -101));
	// // TEST(89, print(" %.8u ", INT_MAX));
	// // TEST(90, print(" %.9u ", INT_MIN));
	// // TEST(91, print(" %.10u ", LONG_MAX));
	// // TEST(92, print(" %.11u ", LONG_MIN));
	// // TEST(93, print(" %.12u ", UINT_MAX));
	// // TEST(94, print(" %.13u ", ULONG_MAX));
	// // TEST(95, print(" %.14u ", 9223372036854775807LL));
	// // TEST(96, print(" %.8u %.9u %.10u %.11u %.12u %.13u %.14u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	
	// // TEST(97, print(" %.1x ", 0));
    // printf("%lu\n", -1);
    // ft_printf(" |%d\n", ft_printf(" %x ", -1));
    // ft_printf(" |%d\n", ft_printf(" %.2x ", -1));
	// printf(" |%d\n", printf(" %.2x ", -1));
	// // TEST(99, print(" %.2x ", 1));
	// // TEST(100, print(" %.1x ", 9));
	// // TEST(101, print(" %.2x ", 10));
	// // TEST(102, print(" %.3x ", 11));
	// // TEST(103, print(" %.4x ", 15));
	// // TEST(104, print(" %.5x ", 16));
	// // TEST(105, print(" %.6x ", 17));
	// printf(" |%d\n", printf(" %.1x ", 99));
	// // TEST(107, print(" %.2x ", 100));
	// // TEST(108, print(" %.3x ", 101));
	// printf(" |%d\n", printf(" %.1x ", -9));
	// printf(" |%d\n", printf(" %.2x ", -10));
	// printf(" |%d\n", printf(" %.3x ", -11));
	// printf(" |%d\n", printf(" %.4x ", -14));
	// printf(" |%d\n", printf(" %.1x ", -15));
	// printf(" |%d\n", printf(" %.2x ", -16));
	// printf(" |%d\n", printf(" %.3x ", -99));
	// printf(" |%d\n", printf(" %.3x ", -100));
	// printf(" |%d\n", printf(" %.4x ", -101));
	// // TEST(118, print(" %.8x ", INT_MAX));
	// // TEST(119, print(" %.9x ", INT_MIN));
	// // TEST(120, print(" %.10x ", LONG_MAX));
	// // TEST(121, print(" %.11x ", LONG_MIN));
	// // TEST(122, print(" %.12x ", UINT_MAX));
	// // TEST(123, print(" %.13x ", ULONG_MAX));
	// // TEST(124, print(" %.14x ", 9223372036854775807LL));
	// // TEST(125, print(" %.8x %.9x %.10x %.11x %.12x %.13x %.14x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	// // SUBCATEGORY(126, 154, cout << endl << FG_LGRAY << "subcategory: X" << RESET_ALL << endl;)
	// // TEST(126, print(" %.1X ", 0));
	// // TEST(127, print(" %.2X ", -1));
	// // TEST(128, print(" %.2X ", 1));
	// // TEST(129, print(" %.1X ", 9));
	// // TEST(130, print(" %.2X ", 10));
	// // TEST(131, print(" %.3X ", 11));
	// // TEST(132, print(" %.4X ", 15));
	// // TEST(133, print(" %.5X ", 16));
	// // TEST(134, print(" %.6X ", 17));
	// // TEST(135, print(" %.1X ", 99));
	// // TEST(136, print(" %.2X ", 100));
	// // TEST(137, print(" %.3X ", 101));
	// // TEST(138, print(" %.1X ", -9));
	// // TEST(139, print(" %.2X ", -10));
	// // TEST(140, print(" %.3X ", -11));
	// // TEST(141, print(" %.4X ", -14));
	// // TEST(142, print(" %.1X ", -15));
	// // TEST(143, print(" %.2X ", -16));

	// printf("|%d\n", printf(" |%-1c| |%-2c| |%-3c| ", '0', 0, '1'));
	// ft_printf("|%d\n", ft_printf(" |%-1c| |%-2c| |%-3c| ", '0', 0, '1'));
	// TEST(6, print(" %-1c %-2c %-3c ", ' ', ' ', ' '));
	// TEST(7, print(" %-1c %-2c %-3c ", '1', '2', '3'));
	// printf("|%d\n", printf(" |%-1c| |%-2c| |%-3c| ", '2', '1', 0));
	// ft_printf("|%d\n", ft_printf(" |%-1c| |%-2c| |%-3c| ", '2', '1', 0));
    // printf("-------------\n");
	// printf("%d\n", printf(" %.5X ", -99));
    // printf("%d\n", printf(" %.3X ", -100));
	// printf("%d\n", printf(" %.4X ", -101));
	// printf("%d\n", printf(" %.8X ", INT_MAX));
	// printf("%d\n", printf(" %.9X ", INT_MIN));
	// printf("%d\n", printf(" %.10X ", LONG_MAX));
	// printf("%d\n", printf(" %.11X ", LONG_MIN));
	// printf("%d\n", printf(" %.12X ", UINT_MAX));
	// printf("%d\n", printf(" %.13X ", ULONG_MAX));
	// printf("%d\n", printf(" %.14X ", 9223372036854775807LL));
	// printf("%d\n", printf(" %.8X %.9X %.10X %.11X %.12X %.13X %.14X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42));
	

        return (0);
}  
