/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 20:56:34 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/17 21:20:30 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <limits.h>
int	is_power_of_2(unsigned int n)
{
	unsigned int i = 1;
	while (i <= n || i <= 2147483647) 
	{
		if (i == n)
			return (1);
		i *= 2;
	}
	return (0);
}

int main()
{
	printf("%i\n", is_power_of_2(2147483647));
	printf("%i\n", INT_MAX);
}
