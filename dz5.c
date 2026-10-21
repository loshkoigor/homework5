#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <locale.h>
#include <math.h>

int task2();

int main()
{
	setlocale(LC_ALL, "RUS");

	task2();

	return 0;
}

int task2()
{
	//Вариант 14

	//Объявление переменных
	double x, y = 15.4, z = 0.252e3;
	double a, b, g;
	int A, B, C;
	int cond_a, cond_b;

	//Ввод x пользователем
	printf("Введите x: ");
	scanf("%lf", &x);

	//Счёт переменных a, b и g
	a = pow(y, x + 1) / (cbrt(fabs(y - 2)) + 3);
	b = (x + y / 2) / (2 * fabs(x + y)) * pow(x + 1, -1 / sin(z));
	g = a + b;

	//Вывод результата
	printf("x = %.3f, g = %.6f\n", x, g);

	//Целые части a, b и g
	A = (int)a;
	B = (int)b;
	C = (int)g;

	//Проверка условий: а) только одно из A и B чётное; б) каждое из A, B, C кратно трём
	cond_a = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);
	cond_b = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

	//Вывод результатов
	printf("A = %d, B = %d, C = %d\n", A, B, C);
	printf("а) Условие выполнено (1 - да, 0 - нет) %d\n", cond_a);
	printf("б) Условие выполнено (1 - да, 0 - нет) %d\n", cond_b);

	return 0;
}
