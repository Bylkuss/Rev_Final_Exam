/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:11:52 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/10 09:22:17 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}

int	main()
{
	char	dest[50] = "alfghbadjshf";
	printf("%s", ft_strcpy(dest, "Azul !"));
}
