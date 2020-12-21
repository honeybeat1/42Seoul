/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 00:28:05 by dachung           #+#    #+#             */
/*   Updated: 2020/12/22 01:48:13 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_double(char* str, int max_pos, char c)
{
	int	i;

	i = 0;
	while (i < max_pos)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}


void	ft_union(char* str1, char* str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str1[i] != 0)
	{
		if (check_double(str1, i, str1[i]))
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j] != 0)
	{
		if (check_double(str1, i, str2[j]) && check_double(str2, j, str2[j]))
			write(1, &str2[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1,"\n",1);
	return (0);
}
