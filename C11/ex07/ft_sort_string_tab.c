/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 03:19:33 by seoklee           #+#    #+#             */
/*   Updated: 2020/11/05 03:57:27 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_strs(char **strs)
{
	int i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		count;
	int		i;
	int		j;
	char	*save;

	i = 0;
	count = count_strs(tab);
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (cmp(tab[i], tab[j]) > 0)
			{
				save = tab[i];
				tab[i] = tab[j];
				tab[j] = save;
			}
			j++;
		}
		i++;
	}
}
