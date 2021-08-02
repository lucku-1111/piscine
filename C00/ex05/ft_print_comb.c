/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:34:44 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/19 16:05:45 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char digit[3];

	digit[0] = '0' - 1;
	while (digit[0]++ < '7')
	{
		digit[1] = digit[0];
		while (digit[1]++ < '8')
		{
			digit[2] = digit[1];
			while (digit[2]++ < '9')
			{
				if (digit[2] != '2')
					write(1, ", ", 2);
				write(1, &digit, 3);
			}
		}
	}
}
