/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:22:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/20 14:16:28 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

static t_stack 	*get_addlstmin(t_stack *sa)
{
	t_stack	*p = sa;

	p->value = sa->value;
	while (sa)
	{
		if (sa->value < p->value)
			p = sa;
		sa = sa->next;
	}
	return (p);
}

void  ft_sorting(t_stack **sa)
{
	t_stack *min = get_addlstmin(*sa);

	if (min->pos > (get_lstsize(*sa) / 2))
		while (min->pos)
			rrotate(sa,NULL, 'a');
	else
		while (min->pos)
			rotate(sa,NULL, 'a');
}
