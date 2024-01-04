/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:29:22 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 13:27:15 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>



int ft_lenjoin(char **av,int ac)
{
	int i = 0 ;
	int j = 1;
	int len = 0;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			len++;
			i++;
		}
		if (j < ac - 1)
			len += 1;
		j++;
	}
	return (len);
}
char	*ft_join(char **av,int len,int ac)
{
	char *str ;
	int i ;
	int j ;
	int s ;

	i = 0;
	j = 1;
	s = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			str[s] = av[j][i];
			s++;
			i++;
		}
		if (j++ < ac - 1)
			str[s++] = ' ';
	}
	return (str[s] = '\0',str);
}

int	is_valid(char **rst)
{
	int i = 0;
	int j = 0;

	while (rst[i])
	{
		j = 0;
		long t =  ft_atoi(rst[i]);
		if (rst[i][j] == 45 || rst[i][j] == 43)
			j++;
		while (rst[i][j])
		{
			if (!ft_isdigit(rst[i][j]))
			{
				return (0);
			}
			j++;
		}
		if ( t > 2147483647 || t < -2147483647)
				return (0);
		i++;
	}
	return (1);
}

int	is_double(char **rst)
{
	int i = 0;
	int j = 0;

	while (rst[i])
	{
		j = i + 1;
		while (rst[j])
		{
			if (ft_atoi(rst[i]) == ft_atoi(rst[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


