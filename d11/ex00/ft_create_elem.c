/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 15:02:40 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/10 23:12:34 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*ptr;

	ptr = (t_list*)malloc(sizeof(t_list));
	if (ptr)
	{
		ptr->next = NULL;
		ptr->data = data;
	}
	return (ptr);
}
