# include <stdio.h>

int main() {
	// ���� (���� ���信�� ����)
	// int (���Ͼ�� ����)
	// int temperature = -6;
	// printf("���� �µ� : %d C", temperature);

	// int a;
	// = ���� �ƴ�, �������� �����͸� ���ʿ� ������ �ֱ�
	// a = 100;
	// a = 30;
	// printf("a���� : %d",a);

	// int date = 18;
	// printf("������ ��¥�� %d�Դϴ�.", date);

	// ������ ����ϸ鼭 �ڱ� �Ұ�

	/*
	int age = 20;
	int grade = 1;
	int year = 2004;
	int month = 4;
	int day = 11;
	
	printf("���� ���̴� %d���Դϴ�.\n", age);
	printf("���� %d�г��Դϴ�.\n", grade);
	printf("���� �¾ �ð��� %d�� %d�� %d���Դϴ�.\n", year, month, day);
	*/
	
	// int ����
	// double, float �Ǽ� (float < double)
	double height = 173.4;
	// char ���� (���ĺ� �Ǵ� Ư������)
	char alpha = 'K';

	// printf("���� Ű�� %d�Դϴ�.", height);   >> �̻��� ���� ����
	printf("���� Ű�� %.2lf�Դϴ�.\n", height);
	printf("���� �̴ϼ��� %c�Դϴ�.\n", alpha);

	return 0;
}