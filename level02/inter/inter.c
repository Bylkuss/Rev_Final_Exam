/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loadjou <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:08:13 by loadjou           #+#    #+#             */
/*   Updated: 2022/03/16 20:40:17 by loadjou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void solve(char *str1, char *str2) {
    int i;
    int j;
    int ascii[127] = {0};

    i = 0;
    while (str2[i])
    {
        if (ascii[str2[i]] == 0)
            ascii[(int)str2[i]] = 1;
        i++;
    }

    i = 0;
    j = 0;
    while (str1[i])
    {
        if (ascii[(int)str1[i]] == 1)
        {
            ascii[(int)str1[i]] = 12;
            write(1, &str1[i], 1);
        }
        i++;
    }

}

int	main(int argc, char **argv) {
	if (argc == 3)
		solve(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
