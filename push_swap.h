/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:29:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 16:10:16 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include "src/libft/libft.h"
#include "tools/tools.h"

char	**input_checker(int ac, char **av);

typedef struct stack
{
	int	value;
	struct stack	*next;
} t_stack;

#endif

