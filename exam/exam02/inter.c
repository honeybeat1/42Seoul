/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 01:58:27 by dachung           #+#    #+#             */
/*   Updated: 2020/12/22 03:03:01 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_double(char *str, int start_pos, char c)
{
	while (str[start_pos] != 0)
	{
		if (c == str[start_pos])
			return (1);
		start_pos++;
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != 0)
	{
		if (check_double(str1, i + 1, str1[i]) || check_double(str2, 0, str1[i]))
			write(1, &str1[i], 1);
		i++;
	}
	while (str2[j] != 0)
	{
		if (check_double(str2, j + 1, str2[j]))
			write(1, &str2[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
