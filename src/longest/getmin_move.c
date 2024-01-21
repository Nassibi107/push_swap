/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmin_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:29:51 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 13:57:06 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"



void	getmin_move(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*tmp;
	int		size;
	int		size1;
	int		index;
	int		index1;

	tmp = *stack_b;
	while (tmp)
	{
		size = get_lstsize(*stack_a);
		size1 = get_lstsize(*stack_b);
		index = ft_index(stack_a, tmp->hook->value);
		index1 = ft_index(stack_b, tmp->value);
		if (index < size / 2)
			tmp->hook->mv = index;
		else if (index >= size / 2)
			tmp->hook->mv = size - index;
		if (index1 < size1 / 2)
			tmp->mv = index1;
		else if (index1 >= size1 / 2)
			tmp->mv = size1 - index1;
		tmp = tmp->next;
	}
}
