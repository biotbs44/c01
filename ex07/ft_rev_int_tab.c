/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yangjeonghun <yangjeonghun@student.42      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:25:43 by yangjeong         #+#    #+#             */
/*   Updated: 2021/09/22 15:34:56 by yangjeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	end_idx;
	int	middle;
	int	temp;

	temp = 0;
	idx = 0;
	end_idx = size - 1;
	middle = (size - 1) / 2;
	while (idx <= middle)
	{
		temp = tab[idx];
		tab[idx] = tab[end_idx];
		tab[end_idx] = temp;
		idx++;
		end_idx--;
	}
}
