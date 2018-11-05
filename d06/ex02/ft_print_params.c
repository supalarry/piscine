/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/03 15:29:38 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/03 23:39:15 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter;
	int digit;

	(void)argc;
	counter = 1;
	while (argv[counter])
	{
		digit = 0;
		while (argv[counter][digit] != '\0')
		{
			ft_putchar(argv[counter][digit]);
			digit++;
		}
		ft_putchar('\n');
		counter++;
	}
	return (0);
}
