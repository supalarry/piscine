/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utilty.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pholster <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/07 10:39:54 by pholster      #+#    #+#                 */
/*   Updated: 2018/10/07 10:39:55 by pholster      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prototypes.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int	loopcount;

	loopcount = 0;
	while (str[loopcount] != '\0')
		loopcount++;
	return (loopcount);
}

int		ft_ccmp(char c, char *charset)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(charset))
	{
		if (c == charset[i])
			return (TRUE);
		i++;
	}
	return (FALSE);
}

void	ft_putnbr(int nb)
{
	int			loopcount;
	int			numberchars[10];
	long long	longnbnb;

	loopcount = 0;
	longnbnb = nb;
	if (longnbnb < 0)
	{
		longnbnb = -longnbnb;
		ft_putchar('-');
	}
	while (longnbnb > -1)
	{
		numberchars[loopcount] = (longnbnb % 10);
		longnbnb = longnbnb / 10;
		loopcount++;
		if (longnbnb == 0)
			longnbnb = -1;
	}
	loopcount = loopcount - 1;
	while (loopcount >= 0)
	{
		ft_putchar(numberchars[loopcount] + '0');
		loopcount--;
	}
}

void	ft_putstr(char *str)
{
	int	loopcount;

	loopcount = 0;
	while (str[loopcount] != '\0')
	{
		ft_putchar(str[loopcount]);
		loopcount++;
	}
}
