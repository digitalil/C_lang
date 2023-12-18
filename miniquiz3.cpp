# include <stdio.h>

int main() {

	// 1.
	int year;

	printf("When were you born? : ");
	scanf_s("%d", &year);
	printf("Age : %d\n", 2023 - year);

	// 2.
	double num1, num2, num3;
	printf("Enter three numbers : ");
	scanf_s("%lf  %lf  %lf", &num1, &num2, &num3);
	printf("Average : %.2lf\n", (num1 + num2 + num3) / 3);

	// 3.
	double won;
	printf("KRW : ");
	scanf_s("%lf", &won);
	printf("USD : %.2lf\n", 0.00077 * won);
	printf("JPY : %.2lf\n", 0.11 * won);

	// 4.
	double dis;
	printf("Distance(km) : ");
	scanf_s("%lf", &dis);
	printf("Distance(mile) : %.2lf\n", dis * 0.621371);

	// 5.
	double cel;
	printf("Celsius : ");
	scanf_s("%lf", &cel);
	printf("Farenheit : %.2lf F", cel * 59 + 32);

	// 6.
	double height;
	double weight;
	printf("Height, Weight : ");
	scanf_s("%lf %lf", &height, &weight);
	printf("BMI : %.2lf", weight / (height * height));
	
	return 0;
}