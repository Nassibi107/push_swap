/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:33:53 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:26:42 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lenjoin(char **av, int ac)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 1;
	len = 0;
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
