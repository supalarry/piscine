/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pholster <pholster@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 13:42:04 by pholster      #+#    #+#                 */
/*   Updated: 2018/10/13 13:42:05 by pholster      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prototypes.h"

char	*ft_create_string(void)
{
	t_list	*begin_list;
	t_list	**list;
	char	*str;
	char	c;
	int		i;

	i = 0;
	c = 0;
	begin_list = 0;
	while (read(0, &c, 1))
	{
		i++;
		ft_list_push_back(&begin_list, c);
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	list = &begin_list;
	while (list[0] != 0)
	{
		str[i++] = list[0]->data;
		list[0] = list[0]->next;
	}
	str[i] = '\0';
	ft_list_clear(&begin_list);
	return (str);
}

t_list	*ft_list_create(char data)
{
	t_list *list;

	list = malloc(sizeof(t_list));
	list->next = 0;
	list->data = data;
	return (list);
}

void	ft_list_push_back(t_list **begin_list, char data)
{
	if (begin_list[0] == 0)
		*begin_list = ft_list_create(data);
	else if (begin_list[0]->next != 0)
		ft_list_push_back(&begin_list[0]->next, data);
	else
		begin_list[0]->next = ft_list_create(data);
}

void	ft_list_clear(t_list **begin_list)
{
	if (begin_list[0] == 0)
		return ;
	if (begin_list[0]->next != 0)
		ft_list_clear(&begin_list[0]->next);
	free(begin_list[0]);
	begin_list = 0;
}
