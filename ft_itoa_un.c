#include "ft_printf.h"

static int	power_ten(int n)
{
	int	p;	

	p = 1;
	if (n != 0)
	{
		while (n >= 1)
		{
			p *= 10;
			n--;
		}
        // printf("power : %i", p);
		return (p);
	}
	else
	{
		return (1);
	}

}

static int	count_nbr(unsigned int nb)
{
	int	c;

	c = 0;
	if (nb < 0)
		c = 1;
	while (c <= 10)
	{
		nb = nb / 10;
		c++;
		if (nb == 0)
			break ;
	}
    // printf("c : %i", c);
	return (c);
}

static void	get_nbr(unsigned long nb, int count, char *str)
{
	unsigned long	nb1;
	int	i;

	i = 0;
	nb1 = nb;
	while (count >= 1)
	{
		nb = nb1 / power_ten(count - 1);
        // printf("nb1 : %lu", nb1);
		str[i] = nb % 10 + '0';
        // printf("str : %c", str[i]);
		count--;
		i++;
	}
	str[i] = 0;
}

char	*ft_itoa_un(unsigned int n)
{
	char	*str;
	int		count;
	unsigned long	nb;

	nb = n;
	count = count_nbr(n);
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	if (nb >= 0 && nb <= 4294967295)
		get_nbr(nb, count, str);
	return (str);
}