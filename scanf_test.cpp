#  include <stdio.h>

int main() {

	/*
	int age;
	printf("���� �Է� : ");
	scanf_s("%d",&age);      // &(���ۻ���) �ʼ�!
	printf("����� ���� : %d", age);
	*/
	
	/*
	int side;
	printf("���簢���� �� ���� ���� : ");
	scanf_s("%d", &side);
	printf("���簢���� ���� : %d", side * side);
	*/
	
	double r;
	double pi = 3.14;

	printf("���� ������ : ");
	scanf_s("%lf", &r);
	printf("���� ���� : %.2lf\n", r*r*pi);

	int year;
	printf("�¾ �⵵ : ");
	scanf_s("%d", &year);
	printf("����� �¾ �⵵ : %d��", year);


	
	return 0;
}

// why scanf doesn't work?
// can we put characters in scanf?