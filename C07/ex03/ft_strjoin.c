/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:39:56 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/31 21:41:45 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char **src, char *sep, int size)
{
	char	*ch;
	char	*str;
	int		i;
	int		j;

	ch = dest;
	i = 0;
	while (i < size)
	{
		j = 0;
		str = src[i];
		while (*str)
			*dest++ = *str++;
		if (i < size - 1)
			while (sep[j])
			{
				*dest++ = sep[j];
				j++;
			}
		i++;
	}
	*dest = '\0';
	return (ch);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;
	int		sum;

	i = 0;
	sum = 1;
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		if (i > 0)
			sum += ft_strlen(sep);
		i++;
	}
	if (!(c = (char *)malloc(sizeof(char) * sum)))
		return (0);
	c = ft_strcpy(c, strs, sep, size);
	return (c);
}
