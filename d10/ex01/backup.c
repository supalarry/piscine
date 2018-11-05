/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   backup.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/09 12:31:54 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/09 12:35:31 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	random(int x)
{
	write(1, "coconut", 8);
}

void	ft_foreach(int *tab, int length, void (*f) (int))
{
	int counter;

	counter = 0;
	while (counter < length)
	{
		f(tab[counter]);
		counter++;
	}
}

int		main(void)
{
	int array[5] = {1,2,3,4,5};

	ft_foreach(array, 5, &random);
	return (0);
}
