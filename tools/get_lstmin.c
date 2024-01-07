/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:00:12 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/07 11:06:43 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

int	get_lstmin(t_stack *sa)
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
