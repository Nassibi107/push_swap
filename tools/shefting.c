/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shefting.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:57:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 17:50:52 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void  shefting(t_stack **head)
{
	int size = get_lstsize(*head);
	int min = get_lstmin(*head);

	while (min)
	{
		if (min <= (size / 2))
			rotate(head, NULL,'a');
		else
			rrotate(head, NULL,'a');
		min = get_lstmin(*head);
	}
}
