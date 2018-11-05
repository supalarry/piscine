/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_boolean.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/06 19:16:17 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/06 23:27:28 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef int	t_bool;
#define TRUE 1
#define SUCCESS 0
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments."
#define ODD_MSG "I have an odd number of arguments."
#define EVEN(nbr) nbr % 2 == 0
