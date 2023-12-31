/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_interval.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:47:26 by bkas              #+#    #+#             */
/*   Updated: 2023/06/16 12:18:03 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        write(1, &argv[1][0], 1);
        i++;
        while (argv[1][i] != '\0')
        {
            if (i % 3 == 0 && i % 5 == 0)
                write(1,"5",1);
            else if(i % 3 == 0)
                write(1,"5",1);
            else if(i % 5 == 0)
                write(1,"3",1);
            else
                write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1, "\n", 1);
}