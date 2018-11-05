/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_prototypes.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pholster <pholster@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/13 13:42:22 by pholster      #+#    #+#                 */
/*   Updated: 2018/10/13 13:42:23 by pholster      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PROTOTYPES_H
# define FT_PROTOTYPES_H

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

# define FALSE 0
# define TRUE 1
# define SQUERS shape_count[0]
# define RECTS shape_count[1]
# define IS_SQUERS is_shape[0]
# define IS_RECTS is_shape[1]

typedef struct  s_list
{
    struct s_list   *next;
    char			data;
}t_list;
typedef struct	s_cmp_list
{
	struct s_cmp_list	*next;
	char				*name;
	char				*top;
	char				*mid;
	char				*bot;
}				t_cmp_list;
char			**ft_str_arr(char *s1, char *s2, char *s3);
char			*ft_create_string(void);
int				*dimensions(char *str);
int				ft_ccmp(char c, char *charset);
int				ft_cmp_list_all_empty(t_cmp_list *list);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
t_cmp_list		*ft_cmp_list_create(char *name, char **pattern);
t_cmp_list		*ft_cmp_list_patterns(void);
t_list			*ft_list_create(char data);
void			ft_cmp_input(char *str, t_cmp_list *begin_list, int *dimen);
void			ft_cmp_list_remove(t_cmp_list **begin_list, char *name);
void			ft_list_clear(t_list **begin_list);
void			ft_list_push_back(t_list **begin_list, char data);
void			ft_put_match(int multipale, int *dimen, char *name);
void			ft_put_matches(int *dimen, t_cmp_list *cmp_list);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_cmp_line(char *str, int *dimensions, char *cmp_line,
	t_cmp_list *list);
void			ft_cmp_list_push_back(t_cmp_list **begin_list, char *name,
	char **pattern);
#endif
