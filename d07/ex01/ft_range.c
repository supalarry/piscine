/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 19:17:57 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/04 23:38:41 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*arr;
	int		counter;
	int		mincopy;

	mincopy = min;
	if (min >= max)
	{
		return (NULL);
	}
	arr = (char*)malloc(4 * (max - min));
	while (counter < (max - min))
	{
		arr[counter] = mincopy;
		mincopy++;
		counter++;
	}
	return (arr);
}
