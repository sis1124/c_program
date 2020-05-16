/*
	documentation:

	Decimal to hexa decimal to decimal converter helps you to calculate decimal value from a hexa decimal number and hexa decimal value from a decimal number.	
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void hexa_to_dec(char hexa[])
{
	int len = strlen(hexa);
	int i, power, decimal;
	decimal = 0;
	power = len - 1;
	for(i = 0; i < len; i++) {
		if(hexa[i] - 48 < 10) {
			decimal += (hexa[i] - 48) * pow(16, power);
			power--;
		}
		else if(hexa[i] - 55 >= 10) {
			decimal += (hexa[i] - 55) * pow(16, power);
			power--;
		}
	}
	printf("decimal: %d\n", decimal);
}
void dec_to_hexa(int n)
{
	int i, temp;
	char hd[100];
	for(i = 0; n != 0; i++) {
		temp = n % 16;
		if(temp < 10) {
			hd[i] = (char)(temp + 48);
		}
		else{
			hd[i] = (char)(temp + 55);
		}
		n = n / 16;
	}
	printf("hexa decimal: ");
	for(i = i - 1; i >= 0; i--){
		printf("%c", hd[i]);
	}
	printf("\n");
}
int main()
{	
	int screen;	
	int x;
	printf("choose option (1 / 2):\n1. decimal to hexa decimal\n2. hexa decimal to decimal\n>> ");
	scanf("%d", &x);

	if(x == 1) {
		int n;
		printf("enter decimal number: ");
		scanf("%d", &n);
		dec_to_hexa(n);
	}
	else if(x == 2) {
		int i;
		char hexa[100];
		printf("enter hexa decimal number: ");
		scanf(" %[^\n]", hexa);
		i = 0;
		while(hexa[i]) {
			hexa[i] = toupper(hexa[i]);
			i++;
		}
		hexa_to_dec(hexa);
	}
	else{
		printf("enter valid option\n");
	}
	scanf("%d", &screen);
	return 0;
}