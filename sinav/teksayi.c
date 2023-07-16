/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teksayi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/20 12:28:18 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_putnbr(char *str)
{
    if(j > 9)
    {
        ft_putnbr(j / 10);
        ft_putnbr(j % 2 == 1);
    }
    if(j < 9)
    {
        char x;
        x = j - 48;
    }
}

int main(int argc, char **argv)
{
    int i;

    i = 0;

    if(argc == 2)
    {
        while(argv[i] != '\0')
        {
            if(argv[i])
            {
                
                ft_putnbr(i);
            }
            j++;
        }
    }
}