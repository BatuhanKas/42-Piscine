/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 11:46:41 by bkas              #+#    #+#             */
/*   Updated: 2023/06/19 12:32:29 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char x)
{
    write(1, &x, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    else if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

int main()
{
    ft_putnbr(42);
}