#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

// Объявление функции (прототип)
void check_symbol(char c);

int main(void)
{
	// Настройка консоли на русский язык (UTF-8)
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);

	char c;

	printf("Введите символ: ");
	if (scanf(" %c", &c) != 1) {
		printf("Ошибка ввода!\n");
		return 1;
	}

	// Вызов функции определения символа
	check_symbol(c);

	return 0;
}

// Реализация функции
void check_symbol(char c)
{
	switch (c)
	{
	case '0': case '1': case '2': case '3': case '4':
	case '5': case '6': case '7': case '8': case '9':
		printf("это цифра\n");
		break;

	case 'a': case 'b': case 'c': case 'd': case 'e': case 'f': case 'g':
	case 'h': case 'i': case 'j': case 'k': case 'l': case 'm': case 'n':
	case 'o': case 'p': case 'q': case 'r': case 's': case 't': case 'u':
	case 'v': case 'w': case 'x': case 'y': case 'z':
	case 'A': case 'B': case 'C': case 'D': case 'E': case 'F': case 'G':
	case 'H': case 'I': case 'J': case 'K': case 'L': case 'M': case 'N':
	case 'O': case 'P': case 'Q': case 'R': case 'S': case 'T': case 'U':
	case 'V': case 'W': case 'X': case 'Y': case 'Z':
		printf("это буква\n");
		break;

	default:
		printf("неизвестный символ\n");
		break;
	}
}