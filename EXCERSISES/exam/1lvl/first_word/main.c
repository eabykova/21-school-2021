/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmicheli <mmicheli@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:11:19 by mmicheli          #+#    #+#             */
/*   Updated: 2021/09/23 17:13:16 by mmicheli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "first_word.h"
int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac == 1)
		write(1, "\n", 1);
	while (ac > i)
	{
		first_word(av[i]);
		i++;
	}
	write(1, "\n", 1);
}
