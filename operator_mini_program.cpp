# include <stdio.h>

int main() {

	// 1. 자릿수 분리하기
	//int num, tenThousand, thousand, hundred, ten, one;

	//printf("Enter a integer (0~99999) : ");
	//scanf_s("%d", &num);

	//tenThousand = num / 10000;
	//thousand = (num % 10000) / 1000;
	//hundred = (num % 1000) / 100;
	//ten = (num % 100) / 10;
	//one = num % 10;

	//printf("%d만%d천%d백%d십%d\n", tenThousand, thousand, hundred, ten, one);

	//// 2. 시간 형태로 변환하기

	//int time, hour, minute, second;

	//printf("Enter a positive integer (minute) : ");
	//scanf_s("%d", &time);
	//
	//hour = time / 3600;
	//minute = (time % 3600) / 60;
	//second = (time % 3600) % 60;

	//printf("%d시간 %d분 %d초", hour, minute, second);

	// 3. 특정 자리수의 값 추출하기
	// 4. 100의 자리 반올림

	//int num, hundred, num4;

	//printf("Enter a integer (10000 ~ 99999) : ");
	//scanf_s("%d", &num);

	//hundred = (num % 1000) / 100;
	//num4 = num - (num % 100);

	//printf("%d\n", hundred);
	//printf("%d\n", num4);

	//// 5. 특정 범위 정수 판별

	//int num5, ternary;

	//printf("Enter a integer : ");
	//scanf_s("%d", &num5);

	//ternary = (num5 > 20 && num5 < 30) ? 1 : 0;
	//printf("%d", ternary);

	// 6. 짝수와 홀수 판별

	int num6;

	printf("Enter a positive integer : ");
	scanf_s("%d", &num6);

	ternary = (num6 % 2 == 0) ? 


	return 0;
}