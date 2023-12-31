/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 16:42:25 by bkas              #+#    #+#             */
/*   Updated: 2023/02/25 16:49:02 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int i)
{
    if(i > 9){
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
    if(i <= 9){
        char x;
        x = i + 48;
        write(1, &x, 1);
    }
}

int main()
{
    int i = 0;

    while (i <= 100)
    {
        if(i % 3 == 0)
            write(1, "fizz", 4);
        if(i % 5 == 0)
            write(1, "buzz", 4);
        if(i %3 != 0 && i %5 != 0)
            ft_putnbr(i);
        i++;
        write(1, "\n", 1);
    }
    
}