/*
	documentation:

	Decimal to octal to decimal converter helps you to calculate decimal value from a octal number and octal value from a decimal number.	
*/
#include <stdio.h>
#include<string.h>
#include<math.h>

void octal_to_dec(char n[])
{
	int len = strlen(n);
	int i, power, decimal;
	decimal = 0;
	power = len - 1;
	for(i = 0; i < len; i++) {
		decimal += (n[i] - '0') * pow(8, power);
		power--;
	}
	printf("decimal: %d\n", decimal);
}
void dec_to_octal(int n)
{
	int i, j;
	int oc[10], octal[10];
	for(i = 0; n != 0; i++) {
		oc[i] = n % 8;
		n = n / 8;
	}
	printf("octal: ");
	for(i = i - 1, j = 0; i >= 0; i--, j++) {
		octal[j] = oc[i];
		printf("%d", octal[j]);
	}
	printf("\n");
}
int main()
{
	int screen;
	int x;
	printf("choose option (1 / 2):\n1. decimal to octal\n2. octal to decimal\n>> ");
	scanf("%d", &x);

	if(x == 1) {
		int n;
		printf("enter decimal number: ");
		scanf("%d", &n);
		dec_to_octal(n);
	}
	else if(x == 2) {
		char n[10];
		printf("enter octal number: ");
		scanf("%s", n);
		octal_to_dec(n);
	}
	else{
		printf("enter valid option\n");
	}
	scanf("%d", &screen);

	return 0;
}