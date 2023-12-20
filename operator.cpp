// operator.cpp

# include <stdio.h>

int main() {

	// Arithmetic Operators
	printf("%d", 3 + 1);

	// Relational Operators
	// True : 1, False : 0
	printf("3 > 1 : %d\n", 3 > 1);

	// Logical Operators
	int a = 10, b = 5, c = 3;

	// && : All True
	printf("result : %d\n", a > b && b > c);  // True : 1
	printf("result : %d\n", !(a <= b) || !(b <= c)); 
	// What does this has to do with Demorgan and 

	// || : At least one is True
	printf("result : %d\n", a < b || b < c || a > c);

	// ! : negates the true value of its operand
	printf("result : %d\n", !(a > b));

	return 0;
}