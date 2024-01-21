/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:56:27 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 13:56:28 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "logest.h"

int	ft_index(t_stack **stack, int a)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == a)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}
