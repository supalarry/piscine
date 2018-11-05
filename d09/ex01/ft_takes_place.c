/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/04 20:31:52 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/04 21:31:36 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		hournext;
	char	suffixone[1];
	char	suffixtwo[1];

	suffixone[0] = 'A';
	suffixtwo[0] = 'P';
	hournext = hour + 1;
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	if (hour == 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19| 20| 21
	| 22 | 23)
		printf("%d.00 %s.M. AND", hour, suffixone);
	else
		printf("%d.00 %s.M. AND", hour, suffixtwo);
	if (hournext >= 12 && hournext <= 23)
		printf("%d.00 %s", hournext, suffixone);
	else if (!(hournext >= 12 && hournext <= 23))
		printf("%d.00 %s", hournext, suffixtwo);
}

int		main(void)
{
	ft_takes_place(00);
	return (0);
}
