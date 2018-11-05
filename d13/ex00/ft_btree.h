/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_btree.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/12 14:42:11 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/12 23:42:34 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef __Btree_h__
# define __Btree_h__

typedef struct			s_btree
{
	struct s_btree		*left;
	struct s_btree		*right;
	void 				*item;
} 						t_btree;
#endif
