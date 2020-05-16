/*
	documentation:

	The program prints trigonometric ratio of sin, cos, tan.
	the ratio should between 0, 30, 45, 60, 90
*/
#include <stdio.h>

int main()
{
	int screen;
	char trigono[4];
	int ratio;
	printf("trigonometric ratio (sin/cos/tan) in deg: ");
	scanf("%s%d", trigono, &ratio);
	if(trigono[0] == 's'){
		switch (ratio){
			case 0:
				printf("%s %d deg: 0\n", trigono, ratio);
				break;
			case 30:
				printf("%s %d deg: 1/2\n", trigono, ratio);
				break;
			case 45:
				printf("%s %d deg: 1/root(2)\n", trigono, ratio);
				break;
			case 60:
				printf("%s %d deg: root(3)/2\n", trigono, ratio);
				break;
			case 90:
				printf("%s %d deg: 1\n", trigono, ratio);
				break;
			default:
				printf("the r: atio should between 0, 30, 45, 60, 90 deg\n");
				break;
		}
	}
	else if(trigono[0] == 'c'){
		switch (ratio){
			case 0:
				printf("%s %d deg: 1\n", trigono, ratio);
				break;
			case 30:
				printf("%s %d deg: root(3)/2\n", trigono, ratio);
				break;
			case 45:
				printf("%s %d deg: 1/root(2)\n", trigono, ratio);
				break;
			case 60:
				printf("%s %d deg: 1/2\n", trigono, ratio);
				break;
			case 90:
				printf("%s %d deg: 0\n", trigono, ratio);
				break;
			default:
				printf("the ratio should between 0, 30, 45, 60, 90 deg\n");
				break;
		}
	}
	else if(trigono[0] == 't'){
		switch (ratio){
			case 0:
				printf("%s %d deg: 0\n", trigono, ratio);
				break;
			case 30:
				printf("%s %d deg: 1/root(3)\n", trigono, ratio);
				break;
			case 45:
				printf("%s %d deg: 1\n", trigono, ratio);
				break;
			case 60:
				printf("%s %d deg: root(3)\n", trigono, ratio);
				break;
			case 90:
				printf("%s %d deg: undefined\n", trigono, ratio);
				break;
			default:
				printf("the ratio should between 0, 30, 45, 60, 90 deg\n");
				break;
		}
	}
	else{
		printf("enter valid ratio of sin/cos/tan\n");
	}
	scanf("%d", &screen);
	return 0;
}
