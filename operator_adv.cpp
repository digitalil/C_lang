# include <stdio.h>

int main() {

	// Increment/Decrement Operators

	// int a = 1, b = 1;

	// printf("a : %d\n", a++);
	// printf("b : %d\n", ++b);

	// ���� ������ (Ternary) ���� �߿�
	// ���� ? ��1 : �� 2

	// int a, b;
	// a = 3 > 1 ? 100 : 200;  // 100
	// b = 3 < 1 ? 100 : 200;  // 200

	int num1, num2, max;

	printf("Enter two integers : ");
	scanf_s("%d %d", &num1, &num2);

	max = num1 > num2 ? num1 : num2;

	printf("%d is the bigger number.", max);

	return 0;
}