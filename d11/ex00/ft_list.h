/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/10 23:22:34 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/10 23:22:53 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int ft)putchar

int bla bla

int main


#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	void			*data;
	struct s_list	*next;
}				t_list;

char			*ft_create_elem(void *data);

#endif


header file -> prototype of function.c
function.c
main.c we include header file with prototype

gcc main.c function.c
./a.out

gcc f1.c f2.c .... fxxxx.c

make
