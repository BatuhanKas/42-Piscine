/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsener <alsener@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 15:57:20 by alsener           #+#    #+#             */
/*   Updated: 2023/02/05 16:50:58 by alsener          ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	sutun;
	int	satir;

	satir = 1;
	while (x > 0 && satir <= y)
	{
		sutun = 1;
		while (sutun <= x)
		{
			if (satir == 1 && sutun == 1)
				ft_putchar ('/');
			else if (satir == 1 && sutun == x || satir == y && sutun == 1)
				ft_putchar ('\\');
			else if (satir == y && sutun == x)
				ft_putchar ('/');
			else if (satir == 1 || satir == y || sutun == 1 || sutun == x)
				ft_putchar ('*');
			else
				ft_putchar (' ');
			sutun++;
		}
		ft_putchar ('\n');
		satir++;
	}
}
