/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lskrauci <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/02 22:39:43 by lskrauci      #+#    #+#                 */
/*   Updated: 2018/10/02 22:53:24 by lskrauci      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int sign;
	int number;

	i = 0;
	sign = 0;
	number = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' ||
		str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
   		{
			i++;
		}
		else if (str[i] == '-')
		{
			if (str[i + 1] -48 >= 0 && str[i + 1] - 48 <= 9)
			{
				sign = 1;
			}
			else
				return (0);
			i++;
		}
		else if (str[i] - 48 >= 0 && str[i] - 48 <= 9)
		{
			number = (number * 10) + (str[i] - 48);
      	if(!(str[i + 1] - 48 >= 0 && str[i + 1] - 48 <= 9))
      	{
        	if (sign == 1)
			{
				return (-number);
			}
			else if (sign == 0)
			{
				return (number);
			}
		}
			i++;
		}
		else
			return (0);
	}
	return (0);
}
