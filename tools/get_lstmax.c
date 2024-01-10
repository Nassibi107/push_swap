/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lstmax.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:23:46 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/09 16:08:14 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"
#include <stdio.h>


int	get_lstmax(t_stack *sa)
{
	int p;

	p = sa->value;
	int s = 0;
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
