/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 08:56:00 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/27 19:47:58 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int fact;

	i = 0;
	fact = 1;
	if (nb >= 0)
	{
		while (++i <= nb)
			fact *= i;
		return (fact);
	}
	else
		return (0);
}
