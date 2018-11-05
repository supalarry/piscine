/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_map.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/08 16:30:26 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/08 20:21:03 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    randome(int x)
{
    return (x * x);
}

int		*ft_map(int *tab, int length, int (*f) (int))
{
	int	i;
	int	*integers;

	i = 0;
	integers = (int*)malloc(4 * length);
	while (i < length)
	{
		integers[i] = f(tab[i]);
		i++;
	}
	while (--length >= 0)
	{
		printf("%d\n", integers[length]);
	}

	return (integers);
}

int     main(void)
{
	int	array[5] = {1,2,3,4,5};

    ft_map(array, 5, &randome);
	return (0);
}
