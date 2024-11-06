/*
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Данные на входе: Целое положительное число
Данные на выходе: Одно слово: YES или NO
*/

#include <stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    ((number >= 100) && (number <= 999)) ? printf("YES") : printf("NO");

    return 0;
}