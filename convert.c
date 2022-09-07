#include "libft/libft.h"

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
char *convert_u(unsigned int u)
{
    char   *str;
    int i;

    i = (int)u;
    str = ft_itoa(i);
    if (!str)
        return NULL;
    return (str);
}
