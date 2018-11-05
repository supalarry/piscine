/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   patterns.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pholster <pholster@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 13:42:04 by pholster      #+#    #+#                 */
/*   Updated: 2018/10/13 13:42:05 by pholster      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prototypes.h"

t_cmp_list	*ft_cmp_list_patterns(void)
{
	t_cmp_list *list;

	list = 0;
	ft_cmp_list_push_back(&list, "rush-00", ft_str_arr("o-o", "| |", "o-o"));
	ft_cmp_list_push_back(&list, "rush-01", ft_str_arr("/*\\", "* *", "\\*/"));
	ft_cmp_list_push_back(&list, "colle-02", ft_str_arr("ABA", "B B", "CBC"));
	ft_cmp_list_push_back(&list, "colle-03", ft_str_arr("ABC", "B B", "ABC"));
	ft_cmp_list_push_back(&list, "colle-04", ft_str_arr("ABC", "B B", "CBA"));
	ft_cmp_list_push_back(&list, "carre", ft_str_arr("...", ". .", "..."));
	ft_cmp_list_push_back(&list, "rectangle", ft_str_arr("...", ". .", "..."));
	ft_cmp_list_push_back(&list, "carre", ft_str_arr("...", "...", "..."));
	ft_cmp_list_push_back(&list, "rectangle", ft_str_arr("...", "...", "..."));
	return (list);
}

t_cmp_list	*ft_cmp_list_create(char *name, char **pattern)
{
	t_cmp_list *list;

	list = malloc(sizeof(t_cmp_list));
	list->next = 0;
	list->name = name;
	list->top = pattern[0];
	list->mid = pattern[1];
	list->bot = pattern[2];
	return (list);
}

void		ft_cmp_list_remove(t_cmp_list **begin_list, char *name)
{
	if (begin_list[0] == 0)
		return ;
	if (begin_list[0]->name != name)
		ft_cmp_list_remove(&begin_list[0]->next, name);
	else
		begin_list[0]->name = 0;
}

void		ft_cmp_list_push_back(t_cmp_list **begin_list,
	char *name, char **pattern)
{
	if (begin_list[0] == 0)
		*begin_list = ft_cmp_list_create(name, pattern);
	else if (begin_list[0]->next != 0)
		ft_cmp_list_push_back(&begin_list[0]->next, name, pattern);
	else
		begin_list[0]->next = ft_cmp_list_create(name, pattern);
}

char		**ft_str_arr(char *s1, char *s2, char *s3)
{
	char **str;

	str = (char **)malloc(sizeof(char *) * 3);
	str[0] = s1;
	str[1] = s2;
	str[2] = s3;
	return (str);
}
