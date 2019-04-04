/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_a.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/19 10:05:17 by exam          #+#    #+#                 */
/*   Updated: 2018/10/19 10:49:03 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 'a' && argv[1][i] != '\0')
		{
			i++;
		}
		if (argv[1][i] == 'a')
		{
			ft_putchar('a');
		}
	}
	else
	{
		ft_putchar('a');
	}
	ft_putchar('\n');
	return (0);
}
