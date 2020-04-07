/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:30:42 by dachung           #+#    #+#             */
/*   Updated: 2020/04/05 20:19:49 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	long r;

	i = 0;
	sign = 1;
	r = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
			i++;
	if (str[i] == '-' | str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != 0)
	{
		if ('0' <= str[i] && str[i] <= '9')
		{
			r = r * 10 + (str[i] - '0');
			i++;
			if (!('0' <= str[i] && str[i] <= '9'))
				return (sign * (int)r);
		}
		else
			break;
	}
	return (sign * (int)r);
}