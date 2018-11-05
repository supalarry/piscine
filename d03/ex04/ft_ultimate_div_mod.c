/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/28 13:55:38 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/09/28 23:27:19 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int remainder;

	division = a / b;
	remainder = a % b;
	*a = division;
	*b = remainder;
}
