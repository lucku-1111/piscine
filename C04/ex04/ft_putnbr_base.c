/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:14:06 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/24 20:51:43 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_base(char *base)
{
	int len;
	int i;

	len = 0;
	while (base[len])
	{
		i = len + 1;
		while (base[i])
		{
			if (base[len] == base[i])
				return (0);
			i++;
		}
		if (base[len] == '+' || base[len] == '-')
			return (0);
		len++;
	}
	if (len < 2)
		return (0);
	else
		return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		len;

	len = check_base(base);
	num = nbr;
	if (len == 0)
		return ;
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= len)
	{
		ft_putnbr_base(num / len, base);
		ft_putchar(base[num % len]);
	}
	else
		ft_putchar(base[num]);
}
