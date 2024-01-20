/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 11:30:09 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/20 14:22:44 by ynassibi         ###   ########.fr       */
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
		move_b(&sa, &sb);
		move_a(&sa, &sb);
	}
	else if (len == 5)
	{
		move_b(&sa, &sb);
		move_b(&sa, &sb);
		move_a(&sa, &sb);
		move_a(&sa, &sb);
	}
	else if (len > 5)
	{
		get_bsmove_lst(&sa, &sb);
		ft_sorting(&sa);
	}
	printf("\033[0;93m---------stack a------\n\033[0m");
	showlst(sa);
	printf("\033[0;93m---------stack b------\n\033[0m");
	showlst(sb);
}
