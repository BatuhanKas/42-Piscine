/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 12:21:24 by bkas              #+#    #+#             */
/*   Updated: 2023/02/26 12:56:50 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
    int x = '0';
    while (x <= '9')
    {
        write(1 ,&x, 1);
        x++;
    }
    return 0;
}