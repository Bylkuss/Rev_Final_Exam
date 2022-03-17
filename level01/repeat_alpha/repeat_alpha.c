/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:26:15 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/15 21:37:26 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	letter_count(char c)
{
	int repeat;
	
	if(c >= 'a' && c <= 'z')
		repeat = c - 'a' + 1;
	else if (c >= 'A' && c <= 'Z')
		repeat = c - 'A' + 1;
	else
		repeat = 1;
	return repeat;
}

int	main(int	argc, char **argv)
{
	int repeat;
	if (argc == 2)
	{
		while(*argv[1] != '\0')
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
