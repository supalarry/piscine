/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   list.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/09 20:10:18 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/10 16:37:42 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __list_h__
#define __list_h__
typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
