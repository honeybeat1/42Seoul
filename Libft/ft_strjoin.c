/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 17:22:26 by dachung           #+#    #+#             */
/*   Updated: 2020/04/09 21:36:07 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*result;
	int		i;
	int		j;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (s1[++i] != 0)
		result[i] = s1[i];
	j = 0;
	while (s2[j] != 0)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
