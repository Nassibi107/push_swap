/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_lstmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:55:54 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:30:15 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_pos_lstmin(t_stack *sa)
{
	int	p;
	int	s;

	p = sa->value;
	s = 0;
	while (sa)
	{
		if (sa->value < p)
		{
			s = sa->pos;
			p = sa->value;
		}
		sa = sa->next;
	}
	return (s);
}
