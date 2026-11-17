#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// Объявление функции перевода в килограммы (прототип)
double to_kilograms(int unit, double m);

int main(void)
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	int unit;
	double m;
	double kg;

	printf("Единицы измерения: 1-кг, 2-мг, 3-г, 4-т, 5-ц\n");
	printf("Введите номер единицы и значение массы M: ");
	if (scanf("%d %lf", &unit, &m) != 2) {
		printf("Ошибка ввода!\n");
		return 1;
	}

	// Вызов функции перевода
	kg = to_kilograms(unit, m);

	if (kg >= 0.0)
		printf("Результат в килограммах = %.6lf кг\n", kg);
	else
		printf("Ошибка: введен неверный номер единицы измерения!\n");

	return 0;
}

// Реализация функции
double to_kilograms(int unit, double m)
{
	switch (unit)
	{
	case 1: // Килограмм
		return m;
	case 2: // Миллиграмм (1 мг = 0.000001 кг)
		return m / 1000000.0;
	case 3: // Грамм (1 г = 0.001 кг)
		return m / 1000.0;
	case 4: // Тонна (1 т = 1000 кг)
		return m * 1000.0;
	case 5: // Центнер (1 ц = 100 кг)
		return m * 100.0;
	default: // Ошибочный номер
		return -1.0;
	}
}
