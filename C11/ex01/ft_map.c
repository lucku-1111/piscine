/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:42:18 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/05 02:13:50 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *copy;
	int i;

	i = 0;
	copy = (int *)malloc(sizeof(int) * length);
	if (!copy)
		return (0);
	while (i < length)
	{
		copy[i] = f(tab[i]);
		i++;
	}
	return (copy);
}
