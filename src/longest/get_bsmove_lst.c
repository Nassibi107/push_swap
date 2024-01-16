/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_bsmove_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:00:38 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/16 13:51:01 by ynassibi         ###   ########.fr       */
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

// int main ()
// {
// 	t_stack *sa;
// 	t_stack *sb = NULL;

// 	sa = malloc(sizeof(t_stack));
// 	sa->next = malloc(sizeof(t_stack));
// 	sa->next->next = malloc(sizeof(t_stack));
// 	sa->next->next->next = malloc(sizeof(t_stack));
// 	sa->next->next->next->next = malloc(sizeof(t_stack));
// 	sa->next->next->next->next->next = malloc(sizeof(t_stack));
// 	sa->next->next->next->next->next->next = NULL;

// 	sa->value = 0;
// 	sa->next->value =-4;
// 	sa->next->next->value = 12;
// 	sa->next->next->next->value = 2;
// 	sa->next->next->next->next->value = 10;
// 	sa->next->next->next->next->next->value = 8;

// 	sa->pos = 0;
// 	sa->next->pos = 1;
// 	sa->next->next->pos = 2;
// 	sa->next->next->next->pos = 3;
// 	sa->next->next->next->next->pos = 4;
// 	sa->next->next->next->next->next->pos = 5;


//    get_bsmove_lst(&sa, &sb);
//    while(sb)
//    {
//       printf("v:%d-h-%d\t", sb->value,sb->hook->value);
//       sb = sb->next;
//    }
// }
