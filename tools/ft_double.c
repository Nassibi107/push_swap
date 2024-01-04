/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:27:02 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 15:27:47 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_double(char **rst)
{
	int i = 0;
	int j = 0;

	while (rst[i])
	{
		j = i + 1;
		while (rst[j])
		{
			if (ft_atoi(rst[i]) == ft_atoi(rst[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
