#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

void main() {
    setlocale(LC_ALL, "RUS");
    double x, y, F;

    puts("Введите x:");
    scanf("%lf", &x);
    puts("Введите y:");
    scanf("%lf", &y);

    F = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;

    printf("Результат вычисления: %.4lf", F);
}