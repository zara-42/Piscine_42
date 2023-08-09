void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
#include <stdio.h>
int main(void)
{
	int		a;
	int		b;
	
	a = 19;
	b = 2556;	
	ft_swap(&a, &b);
	printf("a : %d, b : %d\n", a, b);
}
