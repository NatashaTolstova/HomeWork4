/*
Ввести целое число и определить, верно ли, что все его цифры четные

Данные на входе: Одно целое число
Данные на выходе: YES или NO
*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int number;
    bool flag = false;

    scanf("%d", &number);

    while (number > 0)
    {
        flag = (number % 2 == 0);
        
        if (!flag)
        {
            break;
        }
        
        number /= 10;
    }
    
    flag ? printf("YES") : printf("NO");

    return 0;
}