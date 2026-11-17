#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // Для вычисления степени powf()
#include <windows.h> // Для русского языка

// Объявление функции (прототип)
void calculate(float x, char op, float y);

int main(void)
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	float x, y;
	char op;

	printf("Введите выражение (например 5+3 или 2^3): ");
	if (scanf("%f%c%f", &x, &op, &y) != 3) {
		printf("Ошибка формата ввода! Вводите слитно: число, операция, число.\n");
		return 1;
	}

	// Вызов функции калькулятора
	calculate(x, op, y);

	return 0;
}

// Реализация функции калькулятора
void calculate(float x, char op, float y)
{
	switch (op)
	{
	case '+':
		printf("= %f\n", x + y);
		break;
	case '-':
		printf("= %f\n", x - y);
		break;
	case '*':
		printf("= %f\n", x * y);
		break;
	case '/':
		if (y != 0.0f)
			printf("= %f\n", x / y);
		else
			printf("Ошибка: деление на ноль!\n");
		break;
	case '^': // Дополнительный функционал: возведение в степень
		printf("= %f\n", powf(x, y));
		break;
	default:
		printf("Неизвестная операция: %c\n", op);
		break;
	}
}
