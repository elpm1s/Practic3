#include <stdio.h>
#include <locale.h>

void main()

{
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	puts("������� ������ �����");
	scanf("%d", &num);
	
	puts("������� ������ �����");
	scanf("%d", &num2);

	printf("\n%s%d", "����� ����� ����� ", num + num2);
	printf("\n%s%d", "�������� ����� ����� ", num - num2);
	printf("\n%s%d", "������������ ����� ����� ", num * num2);
	printf("\n%s%d", "������� ����� ����� ", num / num2);
	printf("\n%s%d\n", "������� �� ������� ����� ���� �� ����� ����� ", num % num2);


	system("pause");


}