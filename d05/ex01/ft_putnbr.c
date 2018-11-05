/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/01 12:22:30 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/02 19:42:59 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		sign(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
		return (nb);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
		return (nb);
	}
	else
	{
		return (nb);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int		length;
	int		nb2;
	int		i;
	char	array[length];

	nb = sign(nb);
	nb2 = nb;
	i = -1;
	while (nb2 != 0)
	{
		nb2 = nb2 / 10;
		length++;
	}
	while (i++ < length)
	{
		array[i] = (nb % 10) + '0';
		nb = nb / 10;
	}
	while (--length >= 0)
		ft_putchar(array[length]);
}
