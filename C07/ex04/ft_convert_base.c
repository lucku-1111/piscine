/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 00:41:50 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/02 16:21:29 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
int		ft_atoi_base(char *str, char *base);
char	*init_ch(int num, int base_len);
char	*put_base_to(char *str, int nbr, char *base_to, int *index);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		base_len;
	int		index;
	char	*str;

	base_len = check_base(base_to);
	index = 0;
	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	str = init_ch(num, base_len);
	str = put_base_to(str, num, base_to, &index);
	return (str);
}

char	*init_ch(int num, int base_len)
{
	int		count;
	char	*c;

	if (num < 0)
		count = 2;
	else
		count = 1;
	while (num /= base_len)
		count++;
	if (!(c = (char *)malloc(sizeof(char) * (count))))
		return (0);
	c[count - 1] = '\0';
	return (c);
}

char	*put_base_to(char *str, int nbr, char *base_to, int *index)
{
	long	num;
	int		base_len;

	base_len = check_base(base_to);
	num = nbr;
	if (num < 0)
	{
		str[*index] = '-';
		num = -num;
		(*index)++;
	}
	if (num >= base_len)
	{
		str = put_base_to(str, num / base_len, base_to, index);
		str[(*index)++] = base_to[num % base_len];
	}
	else
		str[(*index)++] = base_to[num % base_len];
	return (str);
}
