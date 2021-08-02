/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:33:11 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/02 11:28:18 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(*range = (int *)malloc(sizeof(int) * (max - min))))
		return (-1);
	while (min < max)
		(*range)[i++] = min++;
	return (i);
}
