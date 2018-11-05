/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_foreach.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/08 15:27:35 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/08 20:18:12 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int	counter;

	counter = 0;
	while (counter < length)
	{
		f(tab[counter]);
		counter++;
	}
}
