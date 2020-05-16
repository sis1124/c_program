/*
	documentation:

	Decimal to binary to decimal converter helps you to calculate binary value from a decimal number and decimal value binary.	
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

void dec_to_binary(int n)
{
	int i, j;
	int bi[10], binary[10];
	for(i = 0; n != 0; i++){
		bi[i] = n % 2;
		n = n / 2;
	}
	printf("binary: ");
	for(i = i - 1, j = 0; i >= 0; i--, j++){
		binary[j] = bi[i];
		printf("%d", binary[j]);
	}
	printf("\n");
}
void binary_to_dec(char n[])
{
	int len = strlen(n);
	int i, power, decimal;
	decimal = 0;
	power = len - 1;
	for(i = 0; i < len; i++){
		decimal += (n[i] - '0') * pow(2, power);
		power--;
	}
	printf("decimal = %d\n", decimal);
}
int main(){
	int screen;
	int x;
	printf("choose option (1 / 2):\n1. decimal to binary\n2. binary to decimal\n>> ");
	scanf("%d", &x);
	if(x == 1){
		int n;
		printf("enter decimal number: ");
		scanf("%d", &n);
		dec_to_binary(n);
	}
	else if(x == 2){
		char n[100];
		printf("enter binary number: ");
		scanf("%s", n);
		binary_to_dec(n);
	}
	else{
		printf("enter valid option\n");
	}
	scanf("%d", &screen);
   
return 0;  
} 