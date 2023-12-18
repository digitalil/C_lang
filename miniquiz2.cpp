#  include <stdio.h>
#  include <stdlib.h> // abs - int
#  include <math.h> // fabs - float

int main() {

	// Miniquiz
	int num1, num2;

	printf("첫 번째 수 입력 : ");
	scanf_s("%d", &num1);
	printf("두 번째 수 입력 : ");
	scanf_s("%d", &num2);

	printf("두 수의 합 : %d\n", num1 + num2);
	printf("두 수의 차 : %d\n", abs(num1 - num2));
	printf("두 수의 곱 : %d\n", num1 * num2);

	int age;

	printf("Enter age : ");
	scanf_s("%d", &age);
	printf("태어난 년도 : %d\n", 2024 - age);

	// absolute value of a number
	double num = -10.5;
	double absoluteValue = fabs(num);
	
	// 이렇게 쓰면 소수점 둘째 자리까지가 아닌 숫자도 소수점 둘째 자리까지 나타내 주는 구나.
	// The absolute value of -10.50 is : 10.50
	printf("The absolute value of %.2f is : %.2f\n", num, absoluteValue);

	return 0;
}