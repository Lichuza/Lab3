#include "HeadP.h"
#include <stdio.h>
#include<locale.h>

main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, "rus");

	//Объявление локальных переменных
	int n = 0, k = 0;
	double eps = 0, total = 0;

	//Выбор задания
	printf("Выберете задание: 1-5\n");
	switch (input_c())
	{
	case '1':
		printf("Выполнение Задания-1\n Введите n: ");
		n = input_i();
		total=series_numbers(n);
		printf("Сумма n слагаемых равна: %f\n",total);
		break;

	case '2':
		printf("Выполнение Задания-2\n Введите eps: ");
		eps = input_f();
		total = series_numbers_eps(eps);
		printf("Сумма слагаемых до eps равна: %f\n", total);
		break;

	case '3':
		printf("Выполнение Задания-3\n Введите n: ");
		n = input_i();
		printf("Введите k: ");
		k = input_i();
		series_numbers_cont(n, k);
		break;

	case '4':
		printf("Выполнение Задания-4\n Введите eps: ");
		eps = input_f();
		n = series_numbers_firsElement(eps);
		printf("Номер первого члена последовательности до eps: %d\n", n);
		break;

	case '5':
		printf("Выполнение Задания-5\n Введите eps: ");
		eps = input_f();
		n=series_numbers_firsMElement(eps);
		printf("Номер первого отрицательного члена последовательности до eps: %d\n", n);
		break;

	default:
		printf("Не верный ввод\n");
		break;
	}

	system("pause");
	return 0;
}