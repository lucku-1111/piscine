/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:26:48 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/28 14:08:16 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_strlen(char *input)
{
	int len;

	len = 0;
	while (input[len])
		len++;
	return (len);
}

char	**sort_argv(int argc, char **argv)
{
	int		i;
	int		j;
	char	*save;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				save = argv[i];
				argv[i] = argv[j];
				argv[j] = save;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;
	int len;

	i = 1;
	argv = sort_argv(argc, argv);
	while (i < argc)
	{
		len = ft_strlen(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
