/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:03:21 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/12 15:05:37 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fun.h"

void  move_a(t_stack **sa,t_stack **sb )
{
   sort_th(sa, 'a');
   push_a (sa,sb);
}