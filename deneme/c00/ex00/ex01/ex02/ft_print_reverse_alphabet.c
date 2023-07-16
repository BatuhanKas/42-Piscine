/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:36:08 by bkas              #+#    #+#             */
/*   Updated: 2023/06/19 10:38:25 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char x = 'z';
    
    while (x >= 'a')
    {
        write(1, &x, 1);
        x--;
    }
}

int main()
{
    ft_print_reverse_alphabet();
    return (0);
}