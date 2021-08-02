/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 16:43:30 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/26 23:01:34 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *str_save;
	char *find_save;

	if (!(*to_find))
		return (str);
	while (*str)
	{
		str_save = str;
		find_save = to_find;
		while (*str_save && *find_save && *str_save == *find_save)
		{
			str_save++;
			find_save++;
		}
		if (!(*find_save))
			return (str);
		str++;
	}
	return (0);
}
