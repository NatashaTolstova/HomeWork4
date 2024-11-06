/*
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
последней и т.д.

Данные на входе: Целое неотрицательное число
Данные на выходе: Целое неотрицательное число наоборот
*/

#include <stdio.h>

int main(void)
{
    int number, reverse = 0, order = 1;

    scanf("%d", &number);

    while ((number / order) > 0)
    {
        reverse *= 10;
        reverse += ((number / order) % 10);
        order *= 10;
    }
    
    printf("%d", reverse);

    return 0;
}