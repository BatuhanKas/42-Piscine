/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/19 14:45:44 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int i){
    if (i > 9)
    {
        ft_putnbr(i / 10);
        ft_putnbr(i % 10);
    }
    if (i <= 9)
    {
        char x = i + 48;
        write(1, &x, 1);
    }
}

int main()
{
    int i = 1;

    while (i <= 100)
    { 
    if (i %3 == 0){
        write(1, "fizz", 4);
    }
    if (i %5 == 0){
        write(1, "buzz", 4);
    }
    if (!(i %3 == 0 || i %5 == 0))
    {
        ft_putnbr(i);
    }
    write(1,"\n",1);
    i++;
    }
}