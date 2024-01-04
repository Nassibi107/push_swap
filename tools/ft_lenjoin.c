/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:33:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 15:34:30 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int ft_lenjoin(char **av,int ac)
{
	int i = 0 ;
	int j = 1;
	int len = 0;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			len++;
			i++;
		}
		if (j < ac - 1)
			len += 1;
		j++;
	}
	return (len);
}
