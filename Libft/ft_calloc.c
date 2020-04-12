/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 17:33:15 by dachung           #+#    #+#             */
/*   Updated: 2020/04/09 21:31:06 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *ptr;

	if (!(ptr = (unsigned char *)malloc(size * count)))
		return (NULL);
	ptr = ft_memset(ptr, 0, count * size);
	return (ptr);
}
