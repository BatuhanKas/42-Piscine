/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/18 13:49:45 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
    write(1, "z\n", 2);
}


j = 0;
        while(argv[i][j] == '\0' || argv[i][j] == ' ')
            i++;
        
        j = 0;
        while(argv[i][j] != '\0' && argv[i][j] != ' '){
            write(1, &argv[i][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);