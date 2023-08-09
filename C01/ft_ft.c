void	ft_ft(int *nbr)
{
	*nbr = 42;// 2) dereferencing *nbr = 42;
}

#include <stdio.h>

int main(void)
{
	int a;

	ft_ft(&a);// 1)beraberdir int *nbr = &a  --- referencing;
	printf("%d", a);
}
