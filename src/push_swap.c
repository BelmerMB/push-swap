/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emetras- <emetras-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:54:38 by emetras-          #+#    #+#             */
/*   Updated: 2023/01/24 11:54:38 by emetras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/data.h"

int		check_int(char *argv);
int		check_digit(char *argv);
int		check_duplicate(char **argv, int argc);
void	check_args(int argc, char **argv);
void 	ft_error(void);

int	main(int argc, char **argv)
{

	if (argc == 1)
		return (0);
	else
		check_args(argc, argv);
	return (0);
}

