/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 14:48:25 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/01 14:55:05 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[len] == '+' || base[len] == '-' || base[len] == ' '
				|| base[len] == '\t' || base[len] == '\n' || base[len] == '\r'
				|| base[len] == '\v' || base[len] == '\f')
			return (0);
		len++;
	}
	if (len < 2)
		return (0);
	else
		return (len);
}

int		is_radix(int len, char c, char *base)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int value;
	int len;

	len = check_base(base);
	sign = 1;
	value = 0;
	if (len == 0)
		return (0);
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_radix(len, *str, base) >= 0)
	{
		value = value * len + (is_radix(len, *str, base));
		str++;
	}
	return (value * sign);
}
