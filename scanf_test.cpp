#  include <stdio.h>

int main() {

	/*
	int age;
	printf("나이 입력 : ");
	scanf_s("%d",&age);      // &(앰퍼샌드) 필수!
	printf("당신의 나이 : %d", age);
	*/
	
	/*
	int side;
	printf("정사각형의 한 변의 길이 : ");
	scanf_s("%d", &side);
	printf("정사각형의 넓이 : %d", side * side);
	*/
	
	double r;
	double pi = 3.14;

	printf("원의 반지름 : ");
	scanf_s("%lf", &r);
	printf("원의 넓이 : %.2lf\n", r*r*pi);

	int year;
	printf("태어난 년도 : ");
	scanf_s("%d", &year);
	printf("당신이 태어난 년도 : %d년", year);


	
	return 0;
}

// why scanf doesn't work?
// can we put characters in scanf?