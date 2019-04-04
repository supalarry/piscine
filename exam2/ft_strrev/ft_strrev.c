/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: exam <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2018/10/12 18:46:10 by exam          #+#    #+#                 */
/*   Updated: 2018/10/12 19:45:47 by exam          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		x;
	int		y;
	int		times;
	char	temp;

	x = 0;
	y = 0;
	times = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	times = (x / 2);
	x--;
	while (times > 0)
	{
		temp = str[y];
		str[y] = str[x];
		str[x] = temp;
		y++;
		x--;
		times--;
	}
	return (str);
}
