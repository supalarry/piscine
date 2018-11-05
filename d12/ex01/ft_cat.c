/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_cat.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/11 17:11:45 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/11 21:47:51 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

void	ft_display_file(char *str)
{
	int		descriptor;
	int		returned;
	char	storage[4096 + 1];

	descriptor = open(str, O_RDONLY);
	if (descriptor == -1)
	{
		write(2, "error opening file\n", 19);
	}
	while ((returned = read(descriptor, storage, 4096)) > 0)
	{
		storage[returned] = '\0';
		ft_putstr(storage);
	}
	if (returned == -1)
	{
		write(2, "error reading file\n", 19);
	}
	write(1, "", 1);
	if (close(descriptor) == -1)
	{
		write(2, "error closing file\n", 19);
	}
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
	}
	while (argv[i])
	{
		ft_display_file(argv[i]);
		i++;
	}
	return (0);
}
