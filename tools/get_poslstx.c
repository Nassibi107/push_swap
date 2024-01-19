/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_poslstx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:02:14 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 11:10:43 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.h"

void get_poslstx(t_stack *head , int p)
{
	while(head)
	{
		if (head->value == p)
			break;
		head = head->next;
	}
}
