#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}					t_stack;

unsigned int	ft_stacksize(t_stack *stack)
{
	unsigned int	count;

	count = 0;
	while (stack != NULL)
	{
		count++;
		stack = stack->next;
	}
	return (count);
}

double	disorder(t_stack)
{
	size_t mis;
	size_t pairs;
	unsigned int ssize;

	ssize = ft_stacksize(t_stack);
	mis = 0;
	pairs = 0;
	pairs = ssize * (ssize - 1) / 2;
	while (t_stack != NULL)
	{
		while (next->t_stack != NULL)
		{
			if ((t_stack->content) > (t_stack->next->content))
			{
				mis += 1;
				t_stack = t_stack->next;
			}
		}
	}
}