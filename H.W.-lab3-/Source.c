#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	int x1, x2, y1, y2; //координаты

	printf("Введите координаты x1, y1 и x2, y2\n");
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	float d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)); //расчет дистанции по формуле евклодова расстояния

	printf("Расстояние между точками: %f\n", d);

	return 0;
}