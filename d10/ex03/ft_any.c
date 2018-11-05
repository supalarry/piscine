/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_any.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/08 16:45:39 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/08 17:01:29 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		randome(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == 'a')
		{
			printf("%d\n", 100 );
			return (1);
		}
		x++;
	}
	return (0);
}

int		ft_any(char **tab, int (*f) (char*))
{
	int	x;

	x = 0;
	while (tab[x])
	{
		if (f(tab[x]) == 1)
		{
			return (1);
		}
		x++;
	}
	return (0);
}
//	ft_strcpy
char * buildstring(char *str)
{
	char *res;
	res = (char*)malloc(sizeof(char) * 50);
	char *a;
	a = res;
	while (*str)
	{
		*a = *str;
		a++;
		str++;
	}
	*a = 0;
	return res;
}

int		main(void)
{
	char *arrayy[4];
	arrayy[0] = buildstring("hia there");
	arrayy[1] = buildstring("hellp");
	arrayy[2] = 0;
	ft_any(arrayy, &randome);
	return (0);
}
