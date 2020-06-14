/*
	documentation:

	The Permutations Calculator finds the number of subsets
	that can be created including subsets of the same items in different orders.
*/
#include <stdio.h>

int factorial(int n)
{
	int i, sum = 1;
	for(i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}
void permu(int n, int r)
{
	int n_minus_r, down_factorial, result;

	n_minus_r = n - r;

	if(n_minus_r < 0){
		printf("Invalid\n");
	}

	result = factorial(n) / factorial(n_minus_r);
	
	printf("%dp%d = %d\n", n, r, result);
}
int main()
{
	int screen;
	int n, r;

	printf("enter n: ");
	scanf("%d", &n);
	printf("enter r: ");
	scanf("%d", &r);
	
	permu(n, r);

	scanf("%d", &screen);
	return 0;
}