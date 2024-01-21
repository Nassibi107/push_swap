/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bolt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:22 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 12:49:11 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

static void	ft_count_move(t_stack *sa, int size)
{
	set_pos_lstx(sa);
	while (sa)
	{
		if (sa->pos >= (size / 2))
			sa->mv = size - sa->pos;
		else
			sa->mv = sa->pos;
		sa = sa->next;
	}
}

void	bolt(t_stack *sb, t_stack *sa)
{
	int	size;
	int	size_a;
	if (!sa || !sb)
		return ;
	size = get_lstsize(sb);
	size_a = get_lstsize(sa);
	set_pos_lstx(sa);
	set_pos_lstx(sb);
	while (sb)
	{
		if (sb->pos >= (size / 2))
			sb->mv = size - sb->pos;
		else
			sb->mv = sb->pos;
		sb = sb->next;
	}
	ft_count_move(sa, size_a);
}
