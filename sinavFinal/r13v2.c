/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r13v2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:17:44 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 15:45:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                if (argv[1][i] <= 'M')
                {
                    argv[1][i] = argv[1][i] + 13;
                }
                else
                {
                    argv[1][i] = argv[1][i] - 13;
                }
            }
            
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                if (argv[1][i] <= 'm')
                {
                    argv[1][i] = argv[1][i] + 13;
                }
                else
                {
                    argv[1][i] = argv[1][i] - 13;
                }
            }
            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}