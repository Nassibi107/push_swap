/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:30:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/08 17:10:31 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "fun.h"

void	ft_switch(t_stack *sa, t_stack *sb)
{
	int	len;

	len = get_lstsize(sa);
	if (len == 2)
		sort_t(&sa, 'a');
	else if (len == 3)
		sort_th(&sa, 'a');
	else if (len == 4)
		{
			push_b(&sa, &sb);
			push_a(&sa, &sb);
		}
	else if (len == 5)
		{
			push_b(&sa, &sb);
			push_b(&sa, &sb);
			push_a(&sa, &sb);
			push_a(&sa, &sb);
		}
	showlst(sa);
}
