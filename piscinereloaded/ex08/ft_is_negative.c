/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:10:46 by bkas              #+#    #+#             */
/*   Updated: 2023/06/17 15:58:34 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x);

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar ('N');
	}
	else
	{
		ft_putchar ('P');
	}
}
