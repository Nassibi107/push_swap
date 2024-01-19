/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 17:29:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 11:05:39 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"


void	push_a (t_stack **sa,t_stack **sb )
{
	t_stack *tmp_b;
	t_stack *tmp_a;

	tmp_b = *sb;
	tmp_a = *sa;
	(*sb) = (*sb)->next;
	*sa  = tmp_b;
	tmp_b->next = tmp_a;
	(*sa) = tmp_b;
	set_pos_lstx(*sa);
	ft_putendl_fd("pa", 1);
}
