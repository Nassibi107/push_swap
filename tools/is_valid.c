/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:30:32 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 15:31:13 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"  

int	is_valid(char **rst)
{
	int i = 0;
	int j = 0;

	while (rst[i])
	{
		j = 0;
		long t =  ft_atoi(rst[i]);
		if (rst[i][j] == 45 || rst[i][j] == 43)
			j++;
		while (rst[i][j])
		{
			if (!ft_isdigit(rst[i][j]))
			{
				return (0);
			}
			j++;
		}
		if ( t > 2147483647 || t < -2147483647)
				return (0);
		i++;
	}
	return (1);
}
