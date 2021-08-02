/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:35:00 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/18 15:35:02 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(char *ch1, char *ch2)
{
	write(1, ch1, 2);
	write(1, " ", 1);
	write(1, ch2, 2);
	if (ch1[0] != '9' || ch1[1] != '8')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	first_num[2];
	char	second_num[2];
	int		check;

	first_num[0] = '0' - 1;
	while (first_num[0]++ < '9')
	{
		first_num[1] = '0' - 1;
		while (first_num[1]++ < '9')
		{
			second_num[0] = first_num[0] - 1;
			check = 0;
			while (second_num[0]++ < '9')
			{
				if (check++ == 0)
					second_num[1] = first_num[1];
				else
					second_num[1] = '0' - 1;
				while (second_num[1]++ < '9')
					print_num(first_num, second_num);
			}
		}
	}
}
