/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 04:03:45 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/31 18:26:46 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*ch;

	ch = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (ch);
}

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(src);
	if (!(c = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	c = ft_strcpy(c, src);
	return (c);
}
