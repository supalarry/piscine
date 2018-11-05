/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dimensions.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 20:53:30 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/13 20:56:42 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prototypes.h"

/*
** dimen[0] = x
** dimen[1] = y
*/

int		*dimensions(char *str)
{
	int	width;
	int	i;
	int	*dimen;

	width = 0;
	i = 0;
	dimen = (int *)malloc(sizeof(int) * 2);
	dimen[1] = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			dimen[1]++;
			if (width > dimen[0])
				dimen[0] = width;
			width = 0;
		}
		else
			width++;
		i++;
	}
	return (dimen);
}
