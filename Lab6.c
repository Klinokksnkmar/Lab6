#define _CRT_SECURE_NO_DEPRECATE
#define PI 3.14
#include <stdio.h>
#include <locale.h>
#include <math.h>

void zd1();
void zd2();
void zd3();

int main()
{
	setlocale(LC_CTYPE, "RUS");
	zd1();
	zd2();
	zd3();

	return 0;

}

void zd1()
{
	int year;//объявление целой переменной years

	printf("Задание 1");
	printf("Введите год: "); //приглашение к вводу года
	scanf("%d", &year); //ввод с клавиатуры значений

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) //вычисление остатка от деления введенного числа на 4
	{
		printf("Год %d високосный\n",year);
	}
	else
	{
		printf("Год %d не високосный\n", year);
	}//потом проверить на примерах: input: 2018 output:"год 2018 не високосный"
	//input: 1900 output: " год 1900 не високосный"
	//input: 2020 output: " год 2020 високосный"
}


void zd2()
{
//9 вариант 
	//контрольный пример: 1) пусть x=0.5; x^2-x=0.25-0.5=-0.25
	//2)пусть x=2; x^2-sinpix^2= 4-sin2pi=4-0=4 
	// или x=-1; 1-sinpi= 1-0=1
	double x;
	double F;
	printf("Задание 2");

	printf("Введите x: ");
	scanf("%lf", &x);

	printf("F(%.1lf)=%.4lf\n", x, (x >= 0 && x <= 1) ? (pow(x, 2.0)-x) : (pow(x, 2.0) - sin(PI * pow(x, 2.0))));//тернарная операция в функции printf
}


void zd3()
{
	int n, a, b, c, d;
	printf("Задание 3");
	printf("Введите четырехзначное число: ");
	scanf("%d",&n);

	a = n / 1000;
	b = (n / 100) % 10;
	c = (n / 10) % 10;
	d = n % 10;

	printf("n/1000=%d", a);//тысячи
	printf("(n/100)%10=%d", b);//сотни
	printf("(n/10)%10=%d", c);//десятки
	printf("n%10=%d", d);//единицы

	if (a <= b && a <= c && a <= d)//сортировка по возрастанию.первая цифра
	{
		printf("%d", a);
		a = 10;//выводим и отбрасываем
	}
	else 
		if (b <= a && b <= c && b <= d)
	{
		printf("%d", b);
		b = 10;
	}
	else 
			if (c <= a && c <= b && c <= d)
	{
		printf("%d", c);
		c = 10;
	}
	else 
			if (d <= a && d <= b && d <= c)
	{
		printf("%d", d);
		d = 10;
	}

	if (a <= b && a <= c && a <= d)//вторая цифра
	{
		printf("%d", a);
		a = 10;//выводим и отбрасываем
	}
	else
		if (b <= a && b <= c && b <= d)
		{
			printf("%d", b);
			b = 10;
		}
		else
			if (c <= a && c <= b && c <= d)
			{
				printf("%d", c);
				c = 10;
			}
			else
				if (d <= a && d <= b && d <= c)
				{
					printf("%d", d);
					d = 10;
				}

	if (a <= b && a <= c && a <= d)//третья цифра
	{
		printf("%d", a);
		a = 10;//выводим и отбрасываем
	}
	else
		if (b <= a && b <= c && b <= d)
		{
			printf("%d", b);
			b = 10;
		}
		else
			if (c <= a && c <= b && c <= d)
			{
				printf("%d", c);
				c = 10;
			}
			else
				if (d <= a && d <= b && d <= c)
				{
					printf("%d", d);
					d = 10;
				}
	if (a != 10)
	{
		printf("%d\n", a);
	}
	else 
		if (b != 10)
		{
			printf("%d\n", b);
		}
		else
			if (c != 10)
			{
				printf("%d\n", c);
			}
			else 
			{
				printf("%d\n", d);
			}
}
