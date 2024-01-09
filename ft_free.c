#include "push_swap.h"

void ft_freesplit (char **av)
{
	int	i;

	i = 0;
	if (av)
	{
		while (av[i])
			free(av[i++]);
	}
    free(av);
	return ;
}
