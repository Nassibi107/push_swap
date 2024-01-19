/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shefting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:57:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:32:15 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void	shefting(t_stack **head)
{
	int	size;
	int	min;

	size = get_lstsize(*head);
	min = get_lstmin(*head);
	while (min)
	{
		if (min <= (size / 2))
			rotate(head, NULL, 'a');
		else
			rrotate(head, NULL, 'a');
		min = get_lstmin(*head);
	}
}
