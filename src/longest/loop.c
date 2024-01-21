/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 13:55:19 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 13:55:38 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

void	loop(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp1;
	int		i;

	tmp = *stack_b;
	i = 2147483647;
	while (tmp)
	{
		if (i > (tmp->mv + tmp->hook->mv))
		{
			i = (tmp->mv + tmp->hook->mv);
			tmp1 = tmp;
		}
		tmp = tmp->next;
	}
	if (ft_index(stack_b, tmp1->value) >= get_lstsize(*stack_b) / 2)
		tmp1->mv = (tmp1->mv) * -1;
	if (ft_index(stack_a, tmp1->hook->value) >= get_lstsize(*stack_a) / 2)
		tmp1->hook->mv = tmp1->hook->mv * -1;
	ft_push_bm(stack_b, stack_a, tmp1);
}
