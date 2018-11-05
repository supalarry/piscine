/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 18:59:49 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/04 23:25:46 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	int		length;
	char	*str;

	counter = 0;
	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	str = (char*)malloc(length + 1);
	while (counter < length)
	{
		str[counter] = src[counter];
		counter++;
	}
	str[counter] = '\0';
	return (str);
}
