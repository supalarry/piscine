/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   cmp.c                                              :+:    :+:            */
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

void	ft_cmp_input(char *str, t_cmp_list *begin_list, int *dimen)
{
	t_cmp_list	*list;
	char		*cmp_line;
	int			y;

	y = 0;
	while (y < dimen[1])
	{
		list = begin_list;
		while (list != 0)
		{
			if (y == 0)
				cmp_line = list->top;
			else if (y != dimen[1] - 1)
				cmp_line = list->mid;
			else
				cmp_line = list->bot;
			ft_cmp_line(&str[((dimen[0] + 1) * y)], dimen, cmp_line, list);
			list = list->next;
		}
		y++;
	}
}

void	ft_cmp_line(char *str, int *dimen, char *cmp_line,
	t_cmp_list *list)
{
	int		x;
	int		i;

	x = 0;
	i = 0;
	if (list->name == 0)
		return ;
	while (x < dimen[0])
	{
		if (x == 0)
			i = 0;
		else if (x != dimen[0] - 1)
			i = 1;
		else
			i = 2;
		if ((str[x] != cmp_line[i] && cmp_line[i] != '.') ||
			(cmp_line[i] == '.' && ft_ccmp(str[x], " \t\n") == TRUE))
        {
			ft_cmp_list_remove(&list, list->name);
			return ;
		}
		x++;
	}
}

int		ft_cmp_list_all_empty(t_cmp_list *list)
{
	int listcount;
	int matchcount;

	listcount = 0;
	matchcount = 0;
	while (list != 0)
	{
		listcount++;
		if (list->name == 0)
			matchcount++;
		list = list->next;
	}
	return (listcount == matchcount);
}

int		ft_strcmp(char *s1, char *s2)
{
	int				loopcount;
	int				returnnb;
	int				s1_len;
	unsigned char	c1;
	unsigned char	c2;

	loopcount = 0;
	returnnb = 0;
	s1_len = ft_strlen(s1);
	while (loopcount <= s1_len)
	{
		c1 = s1[loopcount];
		c2 = s2[loopcount];
		if (c1 != c2)
			return (c1 - c2);
		loopcount++;
	}
	return (returnnb);
}
