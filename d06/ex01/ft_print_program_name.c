/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/03 15:06:16 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/03 23:38:02 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int counter;

	(void)argc;
	counter = 0;
	while (argv[0][counter] != '\0')
	{
		ft_putchar(argv[0][counter]);
		counter++;
	}
    ft_putchar ('\n');
	return (0);
}
