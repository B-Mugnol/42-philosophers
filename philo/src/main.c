/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmugnol- <bmugnol-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 21:52:50 by bmugnol-          #+#    #+#             */
/*   Updated: 2022/11/02 00:17:59 by bmugnol-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	main(int argc, char **argv)
{
	t_config	*config;
	t_table		*table;

	config = get_config(argc, argv);
	if (config == NULL)
		return (INCORRECT_USAGE);
	table = get_table(config->philosopher_count);
	if (!table)
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
