/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bsmove_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:00:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 13:23:42 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>

void	get_bsmove_lst(t_stack **sa, t_stack **sb)
{
	int	i;
	int	size;

	i = 0;
	nsub_to_sb(sa, sb);
	get_lsthooks(*sa, *sb);
	size = get_lstsize(*sb);
	while (i++ < size)
	{
		get_lsthooks(*sa, *sb);
		ft_push_bm(sb, sa);
		set_pos_lstx(*sb);
		set_pos_lstx(*sa);
	}
}
