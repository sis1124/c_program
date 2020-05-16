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
int main()
{	
	int screen;	
	int x;
	printf("choose option (1 / 2):\n");
	printf("1. decimal to binary\n2. binary to decimal\n");
	printf("3. decimal to octal\n4. octal to decimal\n");
	printf("5. decimal to hexa decimal\n6. hexa decimal to decimal\n>> ");
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
	else if(x == 3) {
		int n;
		printf("enter decimal number: ");
		scanf("%d", &n);
		dec_to_octal(n);
	}
	else if(x == 4) {
		char n[10];
		printf("enter octal number: ");
		scanf("%s", n);
		octal_to_dec(n);
	}
	else if(x == 5) {
		int n;
		printf("enter decimal number: ");
		scanf("%d", &n);
		dec_to_hexa(n);
	}
	else if(x == 6) {
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