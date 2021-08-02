/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:09:48 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/03 02:25:45 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	char *ch;

	ch = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (ch);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *info;
	int			i;

	i = 0;
	info = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!info)
		return (0);
	while (i < ac)
	{
		info[i].size = ft_strlen(av[i]);
		info[i].str = av[i];
		info[i].copy = (char *)malloc(sizeof(char) * (info[i].size + 1));
		info[i].copy = ft_strcpy(info[i].copy, av[i]);
		i++;
	}
	info[i].str = 0;
	return (info);
}
