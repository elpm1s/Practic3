#include <stdio.h>
#include <locale.h>

void main()

{
	setlocale(LC_CTYPE, "RUS");
	int num, num2;
	puts("введите первое число");
	scanf("%d", &num);
	
	puts("введите второе число");
	scanf("%d", &num2);

	printf("\n%s%d", "Сумма чисел равна ", num + num2);
	printf("\n%s%d", "Разность чисел равна ", num - num2);
	printf("\n%s%d", "Произведение чисел равно ", num * num2);
	printf("\n%s%d", "Частное чисел равно ", num / num2);
	printf("\n%s%d\n", "Остаток от деления чисел друг на друга равен ", num % num2);


	system("pause");


}