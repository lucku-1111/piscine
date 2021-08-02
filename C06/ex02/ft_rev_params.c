/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:15:49 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/28 09:20:34 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *input)
{
	int len;

	len = 0;
	while (input[len])
		len++;
	return (len);
}

int		main(int argc, char **argv)
{
	int len;

	while (--argc > 0)
	{
		len = ft_strlen(argv[argc]);
		write(1, argv[argc], len);
		write(1, "\n", 1);
	}
	return (0);
}
