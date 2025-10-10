#include <stdio.h>

int main()

{

int k;

printf ("Введіть номер дня тижня: "); scanf ("%d", &k);

switch (k)
{ case 1:
case 2:
case 3:
case 4:
case 5: printf ("Робочий день"); break;

case 6:
case 7: printf ("Вихідний день"); break;

default: printf ("Помилка");

}

return 0;

}