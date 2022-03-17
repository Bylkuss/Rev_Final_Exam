/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:23:11 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/10 09:25:36 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i])
		i++;
	return i;
}

int	main()
{
	printf("%d", ft_strlen("Azul ! 2022"));
}
