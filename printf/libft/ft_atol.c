#include "libft.h"

static __int64_t	ft_isspace(char c);

__int64_t	ft_atol(const char *nptr)
{
	__int64_t		i;
	__int64_t		var;
	__int64_t		signal;

	i = 0;
	var = 0;
	signal = 0;
	while (ft_isspace(nptr[i]) && nptr[i] != '\0')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		signal = i++;
	while (ft_isdigit(nptr[i]))
	{
		var *= 10;
		var += nptr[i] - 48;
		i++;
	}
	if (nptr[signal] == '-')
		return (var * -1);
	else if (var)
		return (var);
	return (0);
}

static __int64_t	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	else if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
