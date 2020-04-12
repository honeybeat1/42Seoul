/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 17:47:55 by dachung           #+#    #+#             */
/*   Updated: 2020/04/09 21:41:30 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		end;
	int		i;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 != 0 && ft_strchr(set, *s1) != NULL)
		s1++;
	end = ft_strlen(s1);
	while (end != 0 && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	if (!(result = (char *)malloc(sizeof(char) * (end + 1))))
		return (NULL);
	i = -1;
	while (++i < end)
		result[i] = s1[i];
	result[i] = '\0';
	return (result);
}
