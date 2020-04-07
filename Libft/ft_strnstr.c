/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:26:42 by dachung           #+#    #+#             */
/*   Updated: 2020/03/29 23:57:13 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char 	*hay;
	char	*hay_cpy;
	int		j;

	if (*needle == 0)
		return ((char *)haystack);
	hay_cpy = ft_substr(haystack, 0, len); //이렇게 해주면 free도 해줘야 함?
	while (len-- > 0)
	{
		
		hay = ft_strchr(hay_cpy, needle[0]);
		if (hay != NULL)
		{
			j = 0;
			while (needle[j] != 0)
			{
				if (hay[j] != needle[j])
					break;
				j++;
			}
			if (needle[j] == 0)
			{
				hay = ft_strchr(haystack, *hay); //이게 된다고? 왠지 이거 물리네뜨에선 에러날거 같다.
				return (hay);
			}
		}
		hay_cpy++;
	}
	return (NULL);
}

// int     main(void)
// {
// 	char s[] = "lorem ipsum dolor sit amet";
// 	char n[] = "lorem";
// 	int len = 15;
// 	printf("%s\n", strnstr(s, n, len));
// 	printf("%s\n", ft_strnstr(s, n, len));
// }