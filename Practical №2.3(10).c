#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf ("Введіть вік людини: ");
    scanf ("%d", &n);
    
    switch(n) {
    
    case 1: {
        printf ("%d рік", n );
    break ; }
    
    case 2: 
    case 3:
    case 4:
    case 22:
    case 23:
    case 24: 
    case 32:
    case 33:
    case 34: 
    case 42:
    case 43:
    case 44: 
    case 52:
    case 53:
    case 54: 
    case 62:
    case 63:
    case 64: 
    case 72:
    case 73:
    case 74:
    case 82:
    case 83:
    case 84: 
    case 92:
    case 93:
    case 94: {
        printf ("%d роки", n );
    break ; }
    
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 25: 
    case 26:
    case 27:
    case 28:
    case 29:
    case 30: 
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40: 
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50: 
    case 55:
    case 56:
    case 57:
    case 58:
    case 59:
    case 60: 
    case 65:
    case 66:
    case 67:
    case 68:
    case 69:
    case 70: 
    case 75:
    case 76:
    case 77:
    case 78:
    case 79:
    case 80: 
    case 85:
    case 86:
    case 87:
    case 88:
    case 89:
    case 90: 
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100: {
        printf ("%d років", n );
    break ; }
    
    case 21: 
    case 31: 
    case 41:
    case 51: 
    case 61: 
    case 71:
    case 81:
    case 91: {
        printf ("%d рік", n );
    break ; }
    
    default: printf ("Eror"); }
    
    return 0;
}
