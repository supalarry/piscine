/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/19 12:43:35 by exam          #+#    #+#                 */
/*   Updated: 2018/10/19 13:50:30 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	i;
	int	*array;

	i = 0;
	if (start > end)
		array = (int*)malloc(sizeof(int) * (start - end) + 1);
	else
		array = (int*)malloc(sizeof(int) * (end - start) + 1);
	while (start != end)
	{
		array[i] = start;
		if (start > end)
		{
			start = start - 1;
		}
		else if (start < end)
		{
			start = start + 1;
		}
		i++;
	}
	array[i] = start;
	return (array);
}
