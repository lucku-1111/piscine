/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 21:34:16 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/27 21:44:28 by seoklee          ###   ########.fr       */
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

	len = ft_strlen(argv[0]);
	if (argc == 1)
	{
		write(1, &argv[0][0], len);
		write(1, "\n", 1);
	}
	return (0);
}
