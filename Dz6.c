#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
//вариант 25
{
	setlocale(LC_CTYPE, "RUS");

	double x;
	double y;

	printf("Введите значения x и y: ");
	scanf("%lf %lf", &x, &y);

	if ((x >= -1 && x <= 3 && y <= 7 && y >= 4)||
		(x <= -4 && x >= -1 && y <= 4 && y >= 1))
	{
		printf("Данная точка принадлежит закрашенным областям\n");
	}
	else
	{
		printf("Данная точка не принадлежит закрашенным областям\n");
	}
	return 0;
}
