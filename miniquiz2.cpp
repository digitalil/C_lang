#  include <stdio.h>
#  include <stdlib.h> // abs - int
#  include <math.h> // fabs - float

int main() {

	// Miniquiz
	int num1, num2;

	printf("ù ��° �� �Է� : ");
	scanf_s("%d", &num1);
	printf("�� ��° �� �Է� : ");
	scanf_s("%d", &num2);

	printf("�� ���� �� : %d\n", num1 + num2);
	printf("�� ���� �� : %d\n", abs(num1 - num2));
	printf("�� ���� �� : %d\n", num1 * num2);

	int age;

	printf("Enter age : ");
	scanf_s("%d", &age);
	printf("�¾ �⵵ : %d\n", 2024 - age);

	// absolute value of a number
	double num = -10.5;
	double absoluteValue = fabs(num);
	
	// �̷��� ���� �Ҽ��� ��° �ڸ������� �ƴ� ���ڵ� �Ҽ��� ��° �ڸ����� ��Ÿ�� �ִ� ����.
	// The absolute value of -10.50 is : 10.50
	printf("The absolute value of %.2f is : %.2f\n", num, absoluteValue);

	return 0;
}