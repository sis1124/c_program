/*
	documentation:

	The Combinations Calculator will find the number of possible combinations that can be obtained by taking a sample of items from a larger set.
	Basically, it shows how many different possible subsets can be made from the larger set.	
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
int main()
{
	int screen;
	int n, r, n_minus_r, down_factorial, result;

	printf("enter n: ");
	scanf("%d", &n);
	printf("enter r: ");
	scanf("%d", &r);

	n_minus_r = n - r;

	down_factorial = factorial(n_minus_r) * factorial(r);

	if(down_factorial < 0){
		printf("Invalid\n");
	}

	result = factorial(n) / down_factorial;
	
	printf("%dc%d = %d\n", n, r, result);
	scanf("%d", &screen);
	return 0;
}