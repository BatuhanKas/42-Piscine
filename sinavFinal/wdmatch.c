/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:03:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 14:48:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_strlen(char *str, char *str2)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int x = 0;
    char p[] = "";


    while (str[i] != '\0' && str2[j] != '\0')
    {
        if(str[i] == str2[j])
        {
           p[x] = str[i];
           i++;
           x++;
        }
        j++;
    }
    
    i = 0;
    while(p == str)
    {
        write(1, &p[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        if(argv[1])
        {
            if(argv[2])
            {
                ft_strlen(argv[1], argv[2]);
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}