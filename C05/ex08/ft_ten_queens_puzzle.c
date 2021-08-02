/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 21:08:26 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/28 21:55:56 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_map[10];

void	recur_queens(int i, int *count);
int		check_possible(int row, int colm);
void	print_map(void);

int		ft_ten_queens_puzzle(void)
{
	int i;
	int value;

	i = 0;
	value = 0;
	while (i < 10)
	{
		g_map[i] = 100;
		i++;
	}
	recur_queens(-1, &value);
	return (value);
}

void	recur_queens(int i, int *count)
{
	int j;

	i++;
	j = 0;
	if (i == 10)
	{
		print_map();
		(*count)++;
		return ;
	}
	while (j < 10)
	{
		if (check_possible(i, j))
		{
			g_map[i] = j;
			recur_queens(i, count);
			g_map[i] = 100;
		}
		j++;
	}
	return ;
}

int		check_possible(int index, int value)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (value - g_map[i] == index - i || value - g_map[i] == i - index)
			return (0);
		if (value == g_map[i])
			return (0);
		i++;
	}
	return (1);
}

void	print_map(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = g_map[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
