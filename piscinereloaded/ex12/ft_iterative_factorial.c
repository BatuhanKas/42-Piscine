/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 15:09:25 by bkas              #+#    #+#             */
/*   Updated: 2023/06/17 15:06:08 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		while (nb >= 2)
		{
			r = r * (nb);
			nb--;
		}
		return (r);
	}
}
