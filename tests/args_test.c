
#include "../Includes/data.h"

int		check_int(char *argv);
int		check_digit(char *argv);
int		check_duplicate(char **argv, int argc);
void	check_args(int argc, char **argv);
void 	ft_error(void);

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
void	check_args(int argc, char **argv)
{
	int	counter;

	counter = 0;
	while (++counter < argc)
	{
		/*tests*/
		if(check_digit(argv[counter]) && check_int(argv[counter]))
			printf("%ld\n", ft_atol(argv[counter]));
		else
			printf("isn't a valid number\n");
	}
	if(check_duplicate(argv, argc))
		printf("Duplicate digit!\n");
	else
		printf("Whitout duplicates!\n");
}


/*
	Function to Check for a duplicates digits
		return: TRUE if have duplicate
		  False if dont have duplicate
*/

int	check_duplicate(char **argv, int argc)
{
	int	index;
	int	counter;

	index = 0;
	counter = 1;
	while (++index < argc)
	{
		while (++counter < argc)
		{
			if(!ft_strncmp(argv[index], argv[counter], 11))
				return (TRUE);
		}
	}
	return (FALSE);
}


/*
Implementations: Check if is a signal integer.
	ok - Implementar para numeros com sinal '+'OR '-' na frente
	ok - Check if is bigger than MAX_INT or less than MIN_INT
	   		what if i put ATOI to return INT64_T
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

int	check_int(char *argv)
{
	if ((ft_atol(argv) < INT_MIN) || (ft_atol(argv) > INT_MAX))
		return (FALSE);
	return (TRUE);
}

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}
