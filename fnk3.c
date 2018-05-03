/*#include <math.h>
#include<stdio.h>
#include "HeadP.h"

//Функция вычисляет сумму n слагаемых
double series_numbers(int n)
{
	double  a1, total = 0;
	int i = 0;

	do
	{
		a1 = ((i ^ 2) + (2 * i) + 1);
		total += ((-1) ^ i)*(i + 1) / a1;
		i++;

	} while (i < n);

	return total;
}

//Функция вычисляет сумму n слагаемых до определенной точности eps double series_numbers_eps(double eps)
{
	double total = 0, a1;
	int i = 0;

	do
	{
		a1 = ((i ^ 2) + (2 * i) + 1);
		total += ((-1) ^ i)*(i + 1) / a1;
		i++;

	} while (abs(total) <= eps);

	return total;
}

//Функцию, которая печатает 𝑛 членов последовательности, исключая из неё каждый 𝑘-ый член
void series_numbers_cont(int n, int k)
{
	double a, a1;
	int l = k, i = 0;

	do
	{
		if (i == (k - 1))
		{
			k += l;
			i++;
			continue;
		}
		a1 = ((i ^ 2) + (2 * i) + 1);
		a = ((-1) ^ i)*(i + 1) / a1;

		printf("%f\n", a);
		i++;

	} while (i < n);
}

//Функцию, которая возвращает номер первого члена последовательности  для которого выполняется условие abs(a) <= eps
int series_numbers_firsElement(double eps)
{

	double a = 0, a1 = 0;
	int i = 0;

	do
	{
		a1 = ((i ^ 2) + (2 * i) + 1);
		a = ((-1) ^ i)*(i + 1) / a1;
		i++;

	} while (abs(a) <= eps);

	return i;
}


//Функцию, которая возвращает номер первого отрицательного  члена последовательности для которого выполняется условие abs(a) <= eps
int series_numbers_firsMElement(double eps)
{

	double a = 0, a1 = 0;
	int i = 0;

	do
	{
		a1 = ((i ^ 2) + (2 * i) + 1);
		a = ((-1) ^ i)*(i + 1) / a1;
		i++;

		if ((abs(a) >eps) && (a < 0))
			return i;

	} while (abs(a) <= eps);

	return 0;
}


//Ввод символа
char input_c()
{
	char s = "";
	scanf_s("%c", &s);
	return s;
}

//Ввод числа с плавающей точкой
float input_f()
{
	float s;
	scanf_s("%f", &s);
	return s;
}

//Ввод числа int
int input_i()
{
	int s;
	scanf_s("%d", &s);
	return s;
}*/