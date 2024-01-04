/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:29:44 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 13:27:03 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
#define PUSH_SWAP

#include <stdio.h>
#include <limits.h>

#include "libft/libft.h"
char	*ft_join(char **av,int len,int ac);
int	ft_lenjoin(char **av,int ac);
int	is_valid(char**	rst);
int	is_double(char **rst);


typedef struct stack
{
	int	value;
	struct stack	*next;
} t_stack;

#endif

