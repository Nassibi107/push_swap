/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nsub_to_sb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:42:13 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/12 14:55:30 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

void  nsub_to_sb(t_stack **head)
{
	int size = get_lstsize(*head);
	int min = get_lstmin(*head);

   while ((*head))
	{
		if (min <= (size / 2))
			rotate(head, 'a');
		else
			rrotate(head, 'a');
		min = get_lstmin(*head);
		if ((*head)->sub == 1)
			break;
	}
}
