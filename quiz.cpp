# include <stdio.h>

int main() {

	// Simple Interest Calculation
	double principal, rate, time, interest;

	printf("Enter principal amount(won) :  ");
	scanf_s("%lf", &principal );
	printf("Enter interest rate(%) :  ");
	scanf_s("%lf", &rate);
	printf("Enter year :  ");
	scanf_s("%lf", &time);

	interest = (principal * rate * time) / 100;

	printf("Simple interest : %.2lf(won)\n", interest);

    // Currency Conversion
	// È¯À² : exchangeRate
	double yen, dollar, won;

	printf("Enter Yen : ");
	scanf_s("%lf", &yen);
	won = yen * 9.08;
	printf("Won : %.2lf(won)\n", won);

	double dollar;
	printf("Enter Dollar : ");
	scanf_s("%lf", &dollar);
	won = dollar * 1301.21;
	printf("Won : %.2lf(won)\n", won);

	// Area of a rectangle
	double width, height, area;

	printf("Enter width : ");
	scanf_s("%lf", &width);
	printf("Enter height : ");
	scanf_s("%lf", &height);
	
	area = width * height;

	printf("Area of a rectangle : %.2lf\n", area);

	// Velocity Calculation
	double distance, time, velocity;

	printf("Enter distance(km) : ");
	scanf_s("%lf", &distance);
	printf("Enter time(hour) : ");
	scanf_s("%lf", &time);

	velocity = distance / time;

	printf("Average velocity (km/h) : %.2lf\n", velocity);

	// Volume of a cylinder
	double radius, h, volume;

	printf("Enter radius(m) : ");
	scanf_s("%lf", &radius);
	printf("Enter height(m) : ");
	scanf_s("%lf", &h);

	volume = 3.141592 * radius * radius * h;

	printf("Volume of a cylinder : %.2lf\n", volume);
    
	/* Using <math.h> header file
	   volume = M_PI * pow(radius,2) * height;
	*/

	return 0;
}


// What language does programmers use more? (Korean or English)