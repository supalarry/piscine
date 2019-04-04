/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   union.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/19 11:21:04 by exam          #+#    #+#                 */
/*   Updated: 2018/10/19 12:24:10 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_check_two(char *strone, char *strtwo, int numtwo, char c)
{
	int y;

	y = 0;
	while (strone[y] != '\0')
	{
		if (strone[y] == c)
		{
			return (0);
		}
		y++;
	}
	y = 0;
	while (y < numtwo)
	{
		if (strtwo[y] == c)
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int		ft_check(char *str, char c, int x)
{
	int y;

	y = 0;
	while (y < x)
	{
		if (str[y] == c)
		{
			return (0);
		}
		y++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int x;

	i = 0;
	x = 0;
	if (argc == 3)
	{
		while (argv[1][i] != '\0')
		{
			if (ft_check(argv[1], argv[1][i], i) == 1)
				ft_putchar(argv[1][i]);
			i++;
		}
		while (argv[2][x] != '\0')
		{
			if (ft_check_two(argv[1], argv[2], x, argv[2][x]) == 1)
				ft_putchar(argv[2][x]);
			x++;
		}
	}
	ft_putchar('\n');
	return (0);
}
