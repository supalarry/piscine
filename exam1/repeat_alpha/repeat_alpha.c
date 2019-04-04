/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   repeat_alpha.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/05 18:38:51 by exam          #+#    #+#                 */
/*   Updated: 2018/10/05 20:21:17 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	upper(char x)
{
	int		count;
	char	a;

	count = 0;
	a = 'A';
	while (x >= a)
	{
		count++;
		a++;
	}
	while (--count >= 0)
		ft_putchar(x);
}

void	lower(char x)
{
	int		count;
	char	a;

	count = 0;
	a = 'a';
	while (x >= a)
	{
		count++;
		a++;
	}
	while (--count >= 0)
		ft_putchar(x);
}

void	repeat_alpha(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			lower(str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			upper(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		repeat_alpha(argv[1]);
	}
	return (0);
}
