#include<stdio.h> 
#define_CRT_SECURE_NO_WARNINGS 
#include<math.h> 
#include<locale.h> 

main void{
 setlocale(LC_ALL, "RUS");
 double x, y, F;

 puts("Введите x:");
 scanf("%lf", &x);

 puts("Введите y:");
 scanf("%lf", &y);

 F = (1 + pow(sin(x + y), 2)) / (2 + fabs(x - (2 * x) / (1 + pow(x, 2) * pow(y, 2)))) + x;

 printf("Результат вычисления: %.4lf", F);
}
