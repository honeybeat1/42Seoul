/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 14:33:03 by dachung           #+#    #+#             */
/*   Updated: 2020/04/12 23:22:45 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*node;

	if (!(node = (t_list *)malloc(sizeof(t_list) * 1)))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
