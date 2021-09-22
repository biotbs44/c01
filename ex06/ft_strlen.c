/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yangjeonghun <yangjeonghun@student.42      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 14:19:50 by yangjeong         #+#    #+#             */
/*   Updated: 2021/09/22 14:25:05 by yangjeong        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;
	int	idx;

	count = 0;
	idx = 0;
	while (str[idx])
	{
		count++;
		idx++;
	}
	return (count);
}
