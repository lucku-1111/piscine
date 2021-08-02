/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 03:54:33 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/03 03:55:14 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		count_strs(char *str, char *charset)
{
	int i;
	int count;

	i = 1;
	count = 0;
	if (!is_charset(str[0], charset))
		count++;
	while (str[i])
	{
		if (is_charset(str[i - 1], charset) && !is_charset(str[i], charset))
			count++;
		i++;
	}
	return (count);
}

int		count_strlen(char **str, char *charset)
{
	int count;

	count = 0;
	while (**str)
	{
		if (!is_charset(**str, charset))
			count++;
		else
		{
			(*str)++;
			return (count);
		}
		(*str)++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char				*ch;

	ch = dest;
	while (n)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = '\0';
		n--;
	}
	if (*dest != '\0')
		*dest = '\0';
	return (ch);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	int		count;
	char	**strs;
	char	*save;

	i = 0;
	count = count_strs(str, charset);
	strs = (char **)malloc(sizeof(char *) * (count + 1));
	while (i < count)
	{
		while (is_charset(*str, charset))
			str++;
		save = str;
		len = count_strlen(&str, charset);
		strs[i] = (char *)malloc(sizeof(char) * (len + 1));
		strs[i] = ft_strncpy(strs[i], save, len);
		i++;
	}
	strs[i] = 0;
	return (strs);
}
