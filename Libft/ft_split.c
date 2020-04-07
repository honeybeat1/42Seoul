/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 00:53:16 by dachung           #+#    #+#             */
/*   Updated: 2020/03/27 16:00:32 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		get_count(char const *s, char c)
{
	int i;
	int count;

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
		/*
		while (s[i++] == c)
		{
			count++;
			if (s[i] == c)
				count--;
			if (s[i] == 0)
				count--;
		} return (count + 1);
		*/
	}
	return (count);
}

static void		ft_strcpy(char *dest, const char *from, const char *to)
{
	while (from < to)
		*(dest++) = *(from++);
	*dest = '\0';
}

char	*get_from(char *from, const char **s, char c)
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

char 	**ft_split(char const *s, char c)
{
	int 	count;
	char 	**arr;
	int		i;
	char	*from;

	count = get_count(s, c);
	if(!(arr = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	i = 0;
	from = (char *)s;
	while (count-- > 0)
	{
		from = get_from(from, &s, c);
		if(!(arr[i] = (char *)malloc(sizeof(char) * (from - s + 1))))
			return (NULL);
		ft_strcpy(arr[i], s, from);
		i++;
		while (*from != 0)
		{
			if (*from != c)
				break;
			from++;
		}
		s = from;
	}
	arr[i] = NULL;
	return (arr);
}

// int		main(void)
// {
// 	char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
// 	char c = 'z';
// 	char **arr = ft_split(s, c);

// 	int i = 0;
// 	while(arr[i] != 0)
// 	{
// 		printf("[%s]\n", arr[i]);
// 		i++;
// 	}
// 	printf("%s\n", arr[i]);
// }
