/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/03 15:52:13 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/03 16:32:06 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int ascii;
	int counter;
	int character;
	int length;

	ascii = -1;
	counter = 0;
	length = 0;
	while (argv[length])
		length++;
	while (++ascii < 128)
	{
		while (++counter < length)
		{
			if (argv[counter][0] == ascii)
			{
				character = -1;
				while (argv[counter][++character] != '\0')
					ft_putchar(argv[counter][character]);
				ft_putchar('\n');
			}
		}
		counter = 0;
	}
	return (0);
}
