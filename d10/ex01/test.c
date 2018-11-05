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
#include <stdio.h>
#include <unistd.h>

void    random(int x)
{
    printf("%d\n", x);
}

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

int     main(void)
{
	int	array[5] = {1,2,3,4,5};

    ft_foreach(array, 5, &random);
	return (0);
}
