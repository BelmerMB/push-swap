#include "../Includes/data.h"

int	main(int argc, char **argv)
{
	while(--argc > 0)
	{
		ft_printf("%d\n", ft_atoi(argv[argc]));
	}
}