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

double	disorder(t_stack *s)
{
	t_stack			*node;
	size_t			mis;
	size_t			pairs;
	unsigned int	ssize;

	ssize = ft_stacksize(s);
	mis = 0;
	pairs = ssize * (ssize - 1) / 2;
	if (ssize < 2)
		return (0.0);
	while (s != NULL)
	{
		node = s->next;
		while (node != NULL)
		{
			if ((s->content) > (node->content))
				mis += 1;
			node = node->next;
		}
		s = s->next;
	}
	return ((double)mis / (double)pairs);
}

int	main(void)
{
	t_stack *stack = NULL;
	t_stack *node1 = malloc(sizeof(t_stack));
	t_stack *node2 = malloc(sizeof(t_stack));
	t_stack *node3 = malloc(sizeof(t_stack));

	node1->content = (void *)3;
	node1->next = node2;

	node2->content = (void *)1;
	node2->next = node3;

	node3->content = (void *)2;
	node3->next = NULL;

	stack = node1;

	double result = disorder(stack);
	printf("Disorder: %f\n", result);

	// Free allocated memory
	free(node1);
	free(node2);
	free(node3);

	return (0);
}