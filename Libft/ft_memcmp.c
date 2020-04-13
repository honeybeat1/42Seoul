/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/05 19:09:42 by dachung           #+#    #+#             */
/*   Updated: 2020/04/13 17:30:05 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s1_c;
	unsigned char *s2_c;

	s1_c = (unsigned char *)s1;
	s2_c = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*s1_c != *s2_c)
			return (*s1_c - *s2_c);
		s1_c++;
		s2_c++;
	}
	return (0);
}
