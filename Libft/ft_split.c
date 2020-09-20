/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 14:19:10 by dachung           #+#    #+#             */
/*   Updated: 2020/04/12 23:21:39 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		get_count(char const *s, char c)
{
	int			i;
	int			count;

	count = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] != 0 && s[i] == c)
		{
			i++;
			continue;
		}
		while (s[i] != 0 && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

static void		ft_strcpy(char *dest, const char *from, const char *to)
{
	while (from < to)
		*(dest++) = *(from++);
	*dest = '\0';
}

static char		*get_from(char *from, const char **s, char c)
{
	while (*from != 0)
	{
		*s = from;
		while (*from != c)
		{
			from++;
			if (*from == c)
			{
				return (from);
			}
		}
		from++;
	}
	return (from);
}

static int		killnorm(char **arr, int count, char const *s, char c)
{
	int		i;
	char	*from;

	i = 0;
	from = (char *)s;
	while (count-- > 0)
	{
		from = get_from(from, &s, c);
		arr[i] = (char *)malloc(sizeof(char) * (from - s + 1));
		ft_strcpy(arr[i], s, from);
		i++;
		while (*from != 0)
		{
			if (*from != c)
				break ;
			from++;
		}
		s = from;
	}
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int			i;
	int			count;
	char		**arr;

	if (!s)
		return (NULL);
	count = get_count(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = killnorm(arr, count, s, c);
	arr[i] = NULL;
	return (arr);
}
