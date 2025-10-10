#include <stdio.h>
#include <math.h>

int main() {

char surname [20], name [20], faculty [50], phone [20]; 
int group, n;

printf ("Введіть прізвище: "); 
scanf ("%s", surname);

printf ("Введіть ім'я: "); 
scanf ("%s", name);

printf ("Введіть назву факультету (без пробілів): "); 
scanf ("%s", faculty);

printf ("Введіть номер групи: "); 
scanf ("%d", &group);

printf ("Введіть номер телефону: "); 
scanf ("%s", phone);

printf("\n1)Прізвище;\n2)Ім'я;\n3)Факультет;\n4)Група;\n5)Телефон;\n"); 
scanf ("%d", &n);

switch(n) {

case 1: {
   printf ("Прізвище: %s\n", surname );
break; }

case 2: {
   printf ("Ім'я: %s\n", name );
break; }

case 3: {
printf ("Назва факультету: %s\n", faculty);
break; }

case 4: {
printf ("Номер групи: %d\n", group);
break; }

case 5: {
printf ("Номер телефону: %s\n", phone);
break; }

default: printf ("Помилка"); }

return 0;
}