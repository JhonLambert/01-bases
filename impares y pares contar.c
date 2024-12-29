#include <stdio.h>

int main(int argc, char *argv[]) {
    int n, pares = 0, impares = 0;

    do {
        printf("Ingresa un numero (negativo para terminar): ");
        scanf("%d", &n);

        if (n > 0) {
            int s = n; 
            int d;
            int impar = 0;

            while (s != 0) {
                d = s % 10;
                s = s / 10;
                if (d % 2 != 0) {
                    impar= impar + 1;
                }
            }

            int par = 0;
            s = n; 
            while (s != 0) {
                d = s % 10;
                s = s / 10;
                if (d % 2 == 0) {
                    par=par + 1;
                }
            }
             pares = pares + par;
             impares = impares + impar;
        } else if (n == 0) {
            printf("El cero no se cuenta.\n");
        }
    } while (n >= 0);

    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);

    return 0;
}