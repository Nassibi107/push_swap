/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:49:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:22:47 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>

static t_stack	*ft_getmin_mv(t_stack *sb)
{
	t_stack	*ele;
	int		tmp;

	ele = sb;
	tmp = sb->mv + sb->hook->mv;
	while (sb)
	{
		if ((sb->mv + sb->hook->mv) < tmp)
		{
			tmp = sb->mv + sb->hook->mv;
			ele = sb;
		}
		sb = sb->next;
	}
	return (ele);
}
static void	ft_up(t_stack **sb, t_stack **sa)
{
	while ((*sb)->pos != 0 || (*sb)->hook->pos != 0)
	{
		if ((*sb)->pos && (*sb)->hook->pos)
			rotate(sb, sa, 'r');
		else
		{
			if ((*sb)->pos > 0)
				rotate(sb, NULL, 'a');
			if ((*sb)->hook->pos > 0)
				rotate(sa, NULL, 'a');
		}
	}
	push_a(sa, sb);
}

static void	ft_down(t_stack **sb, t_stack **sa)
{
	while ((*sb)->pos != 0 || (*sb)->hook->pos != 0)
	{
		if ((*sb)->pos && (*sb)->hook->pos)
			rrotate(sb, sa, 'r');
		else
		{
			if ((*sb)->pos == 0)
				rrotate(sa, NULL, 'a');
			else
				rrotate(sb, NULL, 'a');
		}
	}
	push_a(sa, sb);
}

static void	ft_down_up(t_stack **sb, t_stack **sa, int sib, int sia)
{
	while ((*sb)->pos != 0 || (*sb)->hook->pos != 0)
	{
		if ((*sb)->pos > sib / 2)
			rrotate((sb), NULL, 'a');
		if ((*sb)->hook->pos > sia / 2)
			rrotate(sa, NULL, 'a');
		if ((*sb)->pos <= sib / 2 && (*sb)->pos != 0)
			rotate((sb), NULL, 'a');
		if ((*sb)->hook->pos <= sia / 2 && (*sb)->hook->pos != 0)
			rotate(sa, NULL, 'a');
		if ((*sb)->pos == 0 || (*sb)->hook->pos == 0)
			puts("here");
	}
	push_a(sa, sb);
}
void	ft_push_bm(t_stack **sb, t_stack **sa)
{
	t_stack	*min_p;
	int		size_b;
	int		size_a;

	size_b = get_lstsize(*sb);
	size_a = get_lstsize(*sa);
	bolt(*sb, *sa);
	min_p = ft_getmin_mv(*sb);
	if (min_p->pos < (size_b / 2) && min_p->hook->pos < (size_a / 2))
		ft_up(sb, sa);
	else if (min_p->pos > (size_b / 2) && min_p->hook->pos > (size_a / 2))
		ft_down(sb, sa);
	else
		ft_down_up(sb, sa, size_b, size_a);
}
