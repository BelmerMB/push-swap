

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <stdio.h>
# include "../printf/header/ft_printf.h"
# include "data.h"

# define TRUE 1
# define FALSE 0

void	ft_error(void);
void	check_args(int argc, char **argv);
int		check_duplicate(char **argv, int argc);
int		check_digit(char *argv);
int		check_int(char *argv);

#endif
