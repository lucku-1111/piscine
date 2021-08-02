/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:04:58 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/05 02:44:02 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		main(int ac, char **av)
{
	int		num1;
	int		num2;
	int		result;

	if (ac != 4)
		return (0);
	num1 = ft_atoi(av[1]);
	num2 = ft_atoi(av[3]);
	result = 0;
	if (av[2][0] == '+' || av[2][0] == '-'
			|| av[2][0] == '*' || av[2][0] == '/' || av[2][0] == '%')
	{
		if ((av[2][0] == '/' || av[2][0] == '%') && num2 == 0)
		{
			if (av[2][0] == '/')
				write(1, "Stop : division by zero\n", 24);
			else
				write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
		result = compute_result(av[2][0], num1, num2, &find_op);
	}
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}

int		find_op(char c, int num1, int num2)
{
	if (c == '+')
		return (num1 + num2);
	else if (c == '-')
		return (num1 - num2);
	else if (c == '*')
		return (num1 * num2);
	else if (c == '/')
		return (num1 / num2);
	else if (c == '%')
		return (num1 % num2);
	else
		return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		compute_result(char c, int num1, int num2, int (*f)(char, int, int))
{
	return (f(c, num1, num2));
}
