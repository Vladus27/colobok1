#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Введіть місяць: ");
    if ((a >= 1) && (a <= 12))
    {
         if ((a >= 3) && (a <= 5))
        {
            printf("Це весна\n");
        }
        if ((a == 1) || (a == 2) || (a == 12))
        {
            printf("Це зима\n");
        }
        if ((a >= 6) && (a <= 8))
        {
            printf("Це літо\n");
        }
        if ((a >= 9) && (a <= 11))
        {
            printf("Це осінь\n");
        }
    }
    else
    {
        printf("Введіть число від 1 до 12!\n");
    }
}
