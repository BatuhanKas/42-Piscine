/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   42kocaeli.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:35:19 by bkas              #+#    #+#             */
/*   Updated: 2023/02/22 15:30:01 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	out(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		if (i % 15 == 0)
			write(1, "42 Kocaeli", 11);
		else if (i % 3 == 0)
			write(1, "42", 3);
		else if (i % 5 == 0)
			write(1, "Kocaeli", 8);
		else
		{
			if (i >= 10)
				out((i / 10) + 48);
			out(i % 10 + 48);
		}
		write(1, "\n", 1);
		i++;
	}
}
