/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:26:42 by dachung           #+#    #+#             */
/*   Updated: 2020/04/13 17:25:58 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*hay_cpy;
	int		i;
	int		j;

	if (*needle == 0)
		return ((char *)haystack);
	i = len;
	hay_cpy = (char *)haystack;
	while (i-- > 0)
	{
		hay = ft_strchr(hay_cpy, needle[0]);
		if (hay != NULL && len >= (hay - haystack) + (size_t)ft_strlen(needle))
		{
			j = -1;
			while (needle[++j] != 0)
				if (hay[j] != needle[j])
					break ;
			if (needle[j] == 0)
				return (hay);
		}
		hay_cpy++;
	}
	return (NULL);
}
