/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_inter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dachung <dachung@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 03:04:02 by dachung           #+#    #+#             */
/*   Updated: 2020/12/22 03:17:47 by dachung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_inter(char *str1, char *str2)
{
	int i;
	int j;
	int ascii[255] = {0};

	i = 0;
	j = 0;
	while (str2[i] != 0)
	{
		if (ascii[(int)str2[i]] == 0)
			ascii[(int)str2[i]] = 1;
		i++;
	}
	while (str1[j] != 0)
	{
		if (ascii[(int)str1[j]] == 1)
		{
			write(1, &str1[j], 1);
			ascii[(int)str1[j]] = 2;
		}
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
