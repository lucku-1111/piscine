/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 19:44:37 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/28 21:59:04 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		recur_power(int n, int power, int value)
{
	--power;
	if (power == 0)
		return (n);
	return (value * recur_power(n, power, value));
}

int		ft_recursive_power(int nb, int power)
{
	int value;

	value = nb;
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	if (power < 0)
		return (0);
	return (recur_power(nb, power, value));
}
