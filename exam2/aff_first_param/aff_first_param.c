/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   aff_first_param.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/12 18:03:51 by exam          #+#    #+#                 */
/*   Updated: 2018/10/12 18:16:05 by exam          ########   odam.nl         */
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
	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else if (argc >= 2)
	{
		while (argv[1][i] != '\0')
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		ft_putchar('\n');
	}
	return (0);
}
