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

int	main(int argc, char **argv)
{
	(void) argv;
	if (argc == 1)
		return (0);
	else
		ft_printf("%s", argv[1]);
	return (0);
}
