/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:48:17 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/06 10:51:28 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FUN_H
#define FUN_H

#include "../../push_swap.h"

void swap(t_stack **head,char flag);
void rotate(t_stack **head,char flag);
void rrotate(t_stack **head,char flag);

#endif
