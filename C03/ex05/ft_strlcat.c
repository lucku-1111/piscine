/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:34:41 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/26 22:43:46 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long			ft_strlen(char *ch)
{
	long i;

	i = 0;
	while (ch[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	long i;
	long j;
	long save;

	i = ft_strlen(dest);
	j = 0;
	save = size;
	if (size > 0)
	{
		while (src[j] && (j < (save - 1) - i))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	while (src[j])
		j++;
	if (i > save)
		return (j + save);
	else
		return (j + i);
}
