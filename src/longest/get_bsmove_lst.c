/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bsmove_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:00:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/21 14:01:46 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>



void	get_bsmove_lst(t_stack **sa, t_stack **sb)
{

	nsub_to_sb(sa, sb);
	int i = get_lstsize(*sb);
	get_lsthooks(*sa, *sb);
	while (i > 0)
	{
		get_lsthooks(*sa, *sb);
		bolt(*sb, *sa);
		getmin_move(sb,  sa);
		loop(sa,sb);
		pu_sh(sb, sa,1);
		i--;
	}

}

