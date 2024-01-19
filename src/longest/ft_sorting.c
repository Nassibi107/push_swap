/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:22:36 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/19 17:40:43 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "logest.h"
void  ft_sorting(t_stack **sa)
{
	int min;

	min = get_lstmin(*sa);
	if (min > (get_lstsize(*sa) / 2))
		while (min--)
			rrotate(sa,NULL, 'a');
	else
		while (min--)
			rotate(sa,NULL, 'a');
}
