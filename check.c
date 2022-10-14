#include "ft_printf.h"

char    check_priority(char fl, char defult, int cnt);
char    *check_flags1(char *fmt, t_prnt *spec);
char    *check_flags2(char *fmt, t_prnt *spec);
int     nub_nbr(int nb);
char    *check_width(char *fmt, t_prnt *spec);

char    check_priority(char fl, char defult, int cnt)
{
    int  pr;

    pr = 0;
    if (cnt == 3)
    {
        while (pr < cnt)
        {
            if (defult == FLAG1[pr] || fl == FLAG1[pr])
                return (FLAG1[pr]);
            pr++;
        }
    }
    else if (cnt == 2)
    {
        while (pr < cnt)
        {
            // printf(" %d df : %c fl : %c fl2 : %c\n", pr, defult, fl, FLAG2[pr]);
            if (defult == FLAG2[pr] || fl == FLAG2[pr])
            {
                
                return (FLAG2[pr]);
            }
            pr++;
        }
    }
    return (defult);
}
//Priority # > + > space 
char *check_flags1(char *fmt, t_prnt *spec)
{
    int i;

    i = 0;
    spec->flag1 = '!';
    while (*fmt == FLAG1[0] || *fmt == FLAG1[1] || *fmt == FLAG1[2])
    {
        if (i == 0)
            spec -> flag1 = *fmt;
        else
            spec -> flag1 = check_priority(*fmt, spec -> flag1, 3);
        fmt++;
        i++;
    }
    return (fmt);
}

char *check_flags2(char *fmt, t_prnt *spec)
{
    int i;
    
    i = 0;
    spec->flag2 = ' ';
    while (*fmt == FLAG2[0] || *fmt == FLAG2[1])
    {
        if (i == 0)
            spec->flag2 = *fmt;
        else
        {
            spec->flag2 = check_priority(*fmt, spec->flag2, 2);
                // printf("fl : |%c| w: %d p : %d l : %d\n", spec->flag2, spec->width, spec->pcs, spec->str_len);
        }
        fmt++;
        i++;
    }
        // printf("fl : |%c| w: %d p : %d l : %d\n", spec->flag2, spec->width, spec->pcs, spec->str_len);
    return (fmt);
}

int	nub_nbr(int nb)
{
	int	c;

	c = 0;
	while (c <= 10)
	{
		nb = nb / 10;
		c++;
		if (nb == 0)
		{
			break ;
		}
	}
	return (c);
}

char *check_width(char *fmt, t_prnt *spec)
{
    // printf("fl : |%c| w: %d p : %d l : %d\n", spec->flag2, spec->width, spec->pcs, spec->str_len);
    spec->width = -2;
    if (*fmt == '.')
        spec->width = 0;
    if (*fmt >= '1' && *fmt <= '9')
    {
        spec->width = ft_atoi(fmt);
        fmt += nub_nbr(spec->width);
    }
    if (spec->pcs != -2)
        spec->pcs = -2;
    if (*fmt == '.')
    {
        fmt++;
        spec->pcs = 0;
        // if (spec->flag2 == ' ' || (spec->flag2 == '0' && spec->type == 'x'))
        //     spec->flag2 = '0'; 
        if (*fmt >= '0' && *fmt <= '9')
        {
            spec->pcs = ft_atoi(fmt);
            fmt += nub_nbr(spec->pcs);
        }
    }
    return (fmt);
   }
