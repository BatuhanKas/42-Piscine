/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 10:26:18 by bkas              #+#    #+#             */
/*   Updated: 2023/06/19 10:38:20 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}

int main()
{
    ft_print_alphabet();
    return 0;
}