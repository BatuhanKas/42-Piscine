/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:57:06 by bkas              #+#    #+#             */
/*   Updated: 2023/06/17 16:07:27 by bkas             ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (argv[i] != '\0')
		{
			while (argv[i][j])
			{
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	return (0);
}
