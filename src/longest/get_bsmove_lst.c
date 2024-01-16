/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bsmove_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:00:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 16:27:17 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
#include <stdio.h>


void get_bsmove_lst(t_stack **sa, t_stack **sb)
{
   nsub_to_sb(sa, sb);
   get_lsthooks(*sa, *sb);
   set_pos_lstx(*sb);
   bolt(*sb,  *sa);
}
