/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_th.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:06:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 17:50:19 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void sort_th (t_stack **head ,char flag)
{
	int  p_min = get_lstmin(*head);
   int  p_max = get_lstmax(*head);

   if (p_max == 2 && p_min == 1)
      swap(head,NULL ,flag);
   else if (p_max == 0 && p_min == 2)
   {
      swap(head,NULL ,flag);
      rrotate(head,NULL ,flag);
   }
   else if (p_max == 1 && p_min == 0)
   {
      swap(head,NULL ,flag);
      rotate(head,NULL ,flag);
   }
   else if (p_max == 0 && p_min == 1)
      rotate(head,NULL ,flag);
   else if (p_max == 1 && p_min == 2)
      rrotate(head,NULL ,flag);

}
