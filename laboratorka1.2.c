#include <stdio.h>
#include <math.h>

int main()
{
    printf ("Обчислення вартості покупки з урахуванням знижки\n");
    float suma, sale;
    printf("Введіть суму покупки і натисніть <Enter>: ");
    scanf("%f", &suma);
    if (suma>1000) {
        printf("Вам надається знижка 5 відсотків\n");
        sale=suma*0.95;
    } else if (suma>500) {
        printf("Вам надається знижка 3 відсотки\n");
        sale=suma*0.97;
    } else if (suma<500) {
        printf("Знижка відсутня\n");
        sale=suma;
    }   
    printf("Вартість покупки з урахуванням знижки: %.2fгрн\n", sale);
    
    return 0;
}