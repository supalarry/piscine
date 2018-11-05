/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_display_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/11 16:39:13 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/11 21:29:06 by lskrauci      ########   odam.nl         */
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
	if (close(descriptor) == -1)
	{
		write(2, "error closing file\n", 19);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
	}
	else if (argc == 2)
	{
		ft_display_file(argv[1]);
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
	}
	return (0);
}
