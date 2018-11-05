/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/09/29 13:18:16 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/09/29 15:17:33 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (nb != 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
