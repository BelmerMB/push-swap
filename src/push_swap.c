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

void ft_error(void);
int	check_digit(char *argv);
void check_args(int argc, char **argv);

int	main(int argc, char **argv)
{

	if (argc == 1) //no parameters specified
		return (0);
	else
		check_args(argc, argv);
	return (0);
}

/*
	Implementations:
		Check for a duplicates digits
*/
void check_args(int argc, char **argv)
{
	int	counter;

	counter = 0;
	while (++counter < argc)
	{
		/*tests*/
		if(check_digit(argv[counter]))
			ft_printf("%d\n", ft_atoi(argv[counter]));
		else
			ft_printf("isn't a number\n");
	}
}

/*
Implementations:
	ok - Implementar para numeros com sinal '+'OR '-' na frente
	   - Check if is bigger than MAX_INT or less than MIN_INT
*/
int	check_digit(char *argv)
{
	int	index;
	int	is_digit;

	index = 0;
	if ((argv[0] == '-') || (argv[0] == '+'))
		index++;
	is_digit = ft_isdigit(argv[index]);
	while ((argv[index] != '\0') && is_digit)
	{
		is_digit = ft_isdigit(argv[index]);
		index++;
	}
	if (is_digit)
		return (TRUE);
	return (FALSE);
}

void ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}
