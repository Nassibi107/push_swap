/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynassibi <ynassibi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:02:11 by ynassibi          #+#    #+#             */
/*   Updated: 2024/01/04 13:14:57 by ynassibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	err(void)
{
	ft_putstr_fd("Error\n", 2);
}

static int	is_empty(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (!str[i])
		return (1);
	return (0);
}

static char	**input_checker(int ac, char **av)
{
	char		*str;
	char		**rst;
	int			len;

	len = ft_lenjoin(av, ac);
	str = ft_join(av, len, ac);
	rst = ft_split(str, ' ');
	if (is_valid(rst) && is_double(rst)
		&& is_valid(rst))
		return (rst);
	return (0x0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	int		j;
	int		e;

	j = 1;
	e = 0;
	if (ac >= 2)
	{
		while (j < ac)
		{
			if (is_empty(av[j++]))
				e += 1;
		}
		if (!e)
		{
			if (input_checker(ac, av))
				printf("OK!\n");
			else
				err();
		}
		else
			err();
	}
	else
		err();
}
