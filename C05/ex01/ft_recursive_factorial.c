/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 09:34:20 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/28 23:57:12 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recur_fact(int n, int fact);

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (recur_fact(nb, 1));
}

int		recur_fact(int n, int fact)
{
	fact = n;
	if (n == 1)
		return (1);
	return (fact * recur_fact(--n, fact));
}
