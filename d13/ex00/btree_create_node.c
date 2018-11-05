/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_create_node.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/12 14:58:57 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/12 23:41:15 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *head;

	head = malloc(sizeof(t_btree));
	if (head)
	{
		head->item = item;
		head->left = 0;
		head->right = 0;
		return (head);
	}
	return (0);
}
