/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seoklee <seoklee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 21:15:41 by seoklee           #+#    #+#             */
/*   Updated: 2020/10/21 11:45:38 by seoklee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int save;

	j = size - 1;
	i = 0;
	while (i != size / 2)
	{
		save = tab[i];
		tab[i] = tab[j - i];
		tab[j - i] = save;
		i++;
	}
}
