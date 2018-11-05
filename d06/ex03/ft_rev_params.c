/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/03 15:37:02 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/03 23:39:39 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter;
	int character;

	(void)argc;
	counter = 0;
	while (argv[counter])
	{
		counter++;
	}
	counter--;
	while (counter > 0)
	{
		character = 0;
		while (argv[counter][character] != '\0')
		{
			ft_putchar(argv[counter][character]);
			character++;
		}
		ft_putchar('\n');
		counter--;
	}
	return (0);
}
