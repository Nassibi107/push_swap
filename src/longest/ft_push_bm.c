/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 15:49:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 16:11:05 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"

static int  ft_getmin_mv(t_stack *sb)
{
   int pos = sb->pos ;
   int tmp = sb->mv + sb->hook->mv;
   while(sb)
   {
      if ((sb->mv +  sb->hook->mv) < tmp)
      {
         tmp = sb->mv +  sb->hook->mv;
         pos = sb->pos;
      }

      sb = sb->next;
   }
   return (pos);
}
void ft_push_bm(t_stack *sb)
{
   int min_p;

   min_p =  ft_getmin_mv(sb);
   if ()
}
