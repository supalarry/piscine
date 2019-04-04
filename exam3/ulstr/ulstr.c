/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ulstr.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/19 10:54:38 by exam          #+#    #+#                 */
/*   Updated: 2018/10/19 11:14:33 by exam          ########   odam.nl         */
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
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				ft_putchar((argv[1][i] - 32));
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				ft_putchar((argv[1][i] + 32));
			}
			else
			{
				ft_putchar(argv[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
