/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos_lstmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 19:55:54 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 19:56:48 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_pos_lstmin(t_stack *sa)
{
	int p;

	p = sa->value;
	int s = 0;
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
