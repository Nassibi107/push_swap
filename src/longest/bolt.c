/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bolt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:22 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 14:21:56 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"



static void ft_count_move(t_stack *sa ,int size)
{

	if (sa->pos > (size / 2))
			sa->mv = size - sa->pos;
	else
			sa->mv = sa->pos;
}

void bolt(t_stack *sb ,t_stack *sa )
{
	int size = get_lstsize(sb);
 	int size_a = get_lstsize(sa);
	while (sb)
	{
		if (sb->pos > (size / 2))
			sb->mv = size - sb->pos;

		else
			sb->mv = sb->pos;
		ft_count_move(sb->hook,size_a);
		sb = sb->next;
	}
}
