/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 20:44:31 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/31 21:02:03 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	unsigned int		i;
	unsigned int		num;

	i = 1;
	num = nb;
	if (nb <= 0)
		return (0);
	while (i * i <= num)
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (i);
}

int		ft_is_prime(int nb)
{
	int i;
	int sqrt;

	i = 2;
	sqrt = ft_sqrt(nb);
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
