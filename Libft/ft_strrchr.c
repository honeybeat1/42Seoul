/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:15:39 by dachung           #+#    #+#             */
/*   Updated: 2020/04/05 19:08:11 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		len;

	temp = (char *)s;
	len = ft_strlen(s);
	while (*temp > 0)
		temp++;
	if (c == '\0')
		return (temp);
	while (len-- >= 0)
		if (*temp-- == c)
			return (temp + 1);
	return (NULL);
}