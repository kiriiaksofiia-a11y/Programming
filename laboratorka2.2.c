#include <stdio.h>

int main()
{
    int month, quarter;
    printf ("Введіть номер місяця: ");
    scanf ("%d", &month);
    if (month >= 1 && month <= 3)
        quarter = 1;
    else if (month >= 4 && month <= 6)
        quarter = 2;
    else if (month >= 7 && month <= 9)
        quarter = 3;
    else if (month >= 10 && month <= 12)
        quarter = 4; 
    else {printf("Невірний номер\n");
        return 1;
    }
    printf ("Номер кварталу: %d", quarter);
    return 0;
}