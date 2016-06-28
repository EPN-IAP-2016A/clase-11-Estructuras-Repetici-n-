#include <stdio.h>

/**
 * Ingresar tres numeros enteros positivos y determinar si cada uno de ellos es
 * par o impar. Si uno de los valores es 0 o negativo, se termina el programa.
 * 
 * Ejemplos de ejecución:
 * ##### Primer caso #######
 *  2 es par
 *  3 es impar
 *  4 es par
 * 
 * ##### Segundo caso #######
 *  1 es impar
 *  3 es impar
 *  4 es par
 * 
 * ##### Todos son pares #######
 *  2, 4, 6 son pares
 * 
 * ##### Todos son impares #######
 *  3, 5, 7 son impares
 */


int main() {
    int n, o, p;
    printf("Ingrese tres valores: ");
    scanf("%d %d %d", &n, &o, &p);
    while (n > 0 && o > 0 && p > 0) {
        if(n % 2 == 0 && o % 2 == 0 && p % 2 == 0) {
            printf("%d, %d, %d son pares\n", n, o, p);
        } else {
            if (n % 2 != 0 && o % 2 != 0 && p % 2 != 0) {
                printf("%d, %d, %d son impares\n", n, o, p);
            } else {
                if(n % 2 == 0)
                    printf("%d es par\n", n);
                else
                    printf("%d es impar\n", n);
                
                
                if(o % 2 == 0)
                    printf("%d es par\n", o);
                else
                    printf("%d es impar\n", o);
                
                
                if(p % 2 == 0)
                    printf("%d es par\n", p);
                else
                    printf("%d es impar\n", p);
            }
        }
        
        
        printf("Ingrese tres valores: ");
        scanf("%d %d %d", &n, &o, &p);
    }
    return 0;
}