# include <stdio.h>

int main() {
	// 정수 (수의 개념에서 나온)
	// int (독일어로 정수)
	// int temperature = -6;
	// printf("현재 온도 : %d C", temperature);

	// int a;
	// = 같다 아님, 오른쪽의 데이터를 왼쪽에 변수의 넣기
	// a = 100;
	// a = 30;
	// printf("a값은 : %d",a);

	// int date = 18;
	// printf("오늘의 날짜는 %d입니다.", date);

	// 변수를 사용하면서 자기 소개

	/*
	int age = 20;
	int grade = 1;
	int year = 2004;
	int month = 4;
	int day = 11;
	
	printf("저의 나이는 %d살입니다.\n", age);
	printf("지금 %d학년입니다.\n", grade);
	printf("제가 태어난 시간은 %d년 %d월 %d일입니다.\n", year, month, day);
	*/
	
	// int 정수
	// double, float 실수 (float < double)
	double height = 173.4;
	// char 문자 (알파벳 또는 특수문자)
	char alpha = 'K';

	// printf("저의 키는 %d입니다.", height);   >> 이상한 숫자 등장
	printf("저의 키는 %.2lf입니다.\n", height);
	printf("저의 이니셜은 %c입니다.\n", alpha);

	return 0;
}