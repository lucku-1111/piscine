/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 10:39:19 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/22 00:19:56 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (ch);
}
