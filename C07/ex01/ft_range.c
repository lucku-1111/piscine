/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:27:22 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/02 09:51:17 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*num;

	i = 0;
	if (min >= max)
		return (0);
	if (!(num = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
		num[i++] = min++;
	return (num);
}
