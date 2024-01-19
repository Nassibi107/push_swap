/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:23:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:28:56 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>

int	get_lstmax(t_stack *sa)
{
	int	p;
	int	s;

	p = sa->value;
	s = 0;
	while (sa)
	{
		if (sa->value > p)
		{
			s = sa->pos;
			p = sa->value;
		}
		sa = sa->next;
	}
	return (s);
}
