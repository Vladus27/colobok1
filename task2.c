#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Числа від: ");
    int b = get_int("Числа до: ");
    int suma = 0;
    if (a < b)
    {
        for (int i = a + 1; i < b; i++)
        {
            suma = suma + i;
        }
        printf("Сума чисел між ними становить: %i\n", suma );
    }
    else
    {
        printf("Помилка! Перше число повино бути більшим за друге\n");
    }
}
