/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bolt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:19:22 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:22:05 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

static void	ft_count_move(t_stack *sa, int size)
{
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

	size = get_lstsize(sb);
	size_a = get_lstsize(sa);
	while (sb)
	{
		if (sb->pos >= (size / 2))
			sb->mv = size - sb->pos;
		else
			sb->mv = sb->pos;
		sb = sb->next;
	}
	ft_count_move(sa, size_a);
	write(1, "ok\n", 3);
}
