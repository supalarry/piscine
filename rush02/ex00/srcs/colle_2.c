/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   colle_2.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pholster <pholster@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 16:09:13 by pholster      #+#    #+#                 */
/*   Updated: 2018/10/13 16:09:14 by pholster      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_prototypes.h"

#include <stdio.h>

int		main(void)
{
	char		*str;
	t_cmp_list	*cmp_list;
	int			*dimen;

	str = ft_create_string();
	dimen = dimensions(str);
	cmp_list = ft_cmp_list_patterns();
	if (dimen[0] != dimen[1] || dimen[0] <= 1)
	{
		ft_cmp_list_remove(&cmp_list, "carre");
		ft_cmp_list_remove(&cmp_list, "carre");
	}
	if (dimen[0] <= 1 || dimen[1] <= 1)
	{
		ft_cmp_list_remove(&cmp_list, "rectangle");
		ft_cmp_list_remove(&cmp_list, "rectangle");
	}
	ft_cmp_input(str, cmp_list, dimen);
	if (dimen[0] <= 0 || dimen[1] <= 0)
		ft_putstr("aucune\n");
	else if (ft_cmp_list_all_empty(cmp_list))
		ft_putstr("aucune\n");
	else
		ft_put_matches(dimen, cmp_list);
}

/*
** (SQUERS shape_count[0]) shape_count[0] = square
** (RECTS shape_count[1]) shape_count[1] = rect
** (IS_SQUERS is_shape[0]) is_shape[0] = square
** (IS_RECTS is_shape[1]) is_shape[1] = rect
*/

void	ft_put_matches(int *dimen, t_cmp_list *cmp_list)
{
	int is_shape[2];
	int shape_count[2];
	int multipale;

	multipale = 0;
	SQUERS = 0;
	RECTS = 0;
	while (cmp_list != 0)
	{
		if (cmp_list->name != 0)
		{
			IS_SQUERS = (ft_strcmp("carre", (cmp_list->name)) == 0);
			IS_RECTS = (ft_strcmp("rectangle", (cmp_list->name)) == 0);
			SQUERS += IS_SQUERS;
			RECTS += IS_RECTS;
			if (((SQUERS == 1 && IS_SQUERS == 1)
				|| (RECTS == 1 && IS_RECTS == 1))
				|| (IS_SQUERS == 0 && IS_RECTS == 0))
				ft_put_match(multipale++, dimen, cmp_list->name);
		}
		cmp_list = cmp_list->next;
	}
	if (multipale > 0)
		ft_putstr("\n");
}

void	ft_put_match(int multipale, int *dimen, char *name)
{
	if (multipale > 0)
		ft_putstr(" || ");
	ft_putstr("[");
	ft_putstr(name);
	ft_putstr("] [");
	ft_putnbr(dimen[0]);
	ft_putstr("] [");
	ft_putnbr(dimen[1]);
	ft_putstr("]");
}
