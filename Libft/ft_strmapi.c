/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 18:54:11 by dachung           #+#    #+#             */
/*   Updated: 2020/04/09 21:44:17 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s1;

	if (!s)
		return (NULL);
	if (!(s1 = ft_strdup(s)))
		return (NULL);
	i = 0;
	while (s1[i] != 0)
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	return (s1);
}
