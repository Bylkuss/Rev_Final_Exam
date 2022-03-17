/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:17:29 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/16 17:21:27 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_rev_print(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}


int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rev_print(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);

}
