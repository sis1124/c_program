#include <stdio.h>

int main()
{
	double weight, inch, meter, bmi;

	printf("Body Mass Index(BMI) Calculator.\n\n");

	printf("enter weight(in kg): ");
	scanf("%lf", &weight);
	printf("enetr height(in inch): ");
	scanf("%lf", &inch);

	meter = inch * 0.0254;
	bmi = weight / (meter * meter);

	printf("Your  is %.1lf. ", bmi);
	if(bmi < 18.5) {
        printf("This is considered underweight.\n");
	}
	else if(bmi >= 18.5 && bmi <= 24.9) {
        printf("This is considered healthy.\n");
	}
	else if(bmi >= 25.0 && bmi <= 29.9) {
        printf("This is considered overweight.\n");
	}
	else{
        printf("This is considered obese.\n");
	}
	getchar();
	getchar();
	return 0;
}
