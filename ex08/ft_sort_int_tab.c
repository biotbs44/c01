/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yangjeonghun <yangjeonghun@student.42      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 15:44:01 by yangjeong         #+#    #+#             */
/*   Updated: 2021/09/22 15:51:52 by yangjeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	end_idx;
	int	idx;

	temp = 0;
	end_idx = size - 1;
	idx = 0;
	while (end_idx > 0)
	{
		while (idx < end_idx)
		{
			if (tab[idx] > tab[idx + 1])
			{
				temp = tab[idx];
				tab[idx] = tab[idx + 1];
				tab[idx + 1] = temp;
			}
			idx++;
		}
		idx = 0;
		end_idx--;
	}
}
