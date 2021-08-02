/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:09:59 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/19 21:13:45 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat(char *str, int n, int col, int i)
{
	if (++col == n)
	{
		write(1, str, n);
		if (str[0] != '9' - n + 1)
			write(1, ", ", 2);
		i = 10;
	}
	while (i <= 9)
	{
		str[col] = '0' + i++;
		ft_repeat(str, n, col, i);
	}
}

void	ft_print_combn(int n)
{
	char num[n];

	ft_repeat(num, n, -1, 0);
}

int		main(void)
{
	ft_print_combn(3);
	return 0;
}
