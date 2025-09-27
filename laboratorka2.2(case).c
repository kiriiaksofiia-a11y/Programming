#include <stdio.h>

int main()
{
    int k;
    printf ("Введіть номер місяця: ");
    scanf ("%d", &k);
    
    switch (k)
    { case 1:
    case 2:
    case 3: printf ("1 квартал"); break;
    case 4:
    case 5:
    case 6: printf ("2 квартал"); break;
    case 7:
    case 8: 
    case 9: printf ("3 квартал"); break;
    case 10:
    case 11:
    case 12: printf ("4 квартал"); break;
    default: printf ("Eror");
    }
    return 0;
}
