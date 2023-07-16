/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 10:48:45 by bkas              #+#    #+#             */
/*   Updated: 2023/02/20 11:43:31 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    while(str[i-1] != '\0')
    {
        write(1, &str[i-1], 1);
        i--;
    }
    return 0;
}

int main()
{
    char str[] = "alican";
    ft_strrev(str);
}