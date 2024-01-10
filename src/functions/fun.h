/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:48:17 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/10 15:03:31 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FUN_H
#define FUN_H

#include "../../push_swap.h"

void swap(t_stack **head,char flag);
void rotate(t_stack **head,char flag);
void rrotate(t_stack **head,char flag);
void ft_switch(t_stack *sa , t_stack *sb);
void sort_t (t_stack **head ,char flag);
void sort_th (t_stack **head ,char flag);
void push_b (t_stack **head,t_stack **sb);
void	push_a (t_stack **sa,t_stack **sb );
void	pushing (t_stack **sa,t_stack **sb );
int *ft_tsub(t_stack *head);

#endif
