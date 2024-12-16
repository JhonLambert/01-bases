#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int a;
    char respuesta[3];
    do {
        for (int i = 0; i < 3; i++) {
            do {
                printf("Ingrese un numero entre 1 y 1000: ");
                scanf("%d", &a);
            } while (a < 1 || a > 1000);

            if (a == 969) {
                printf("Ganaste, La edad de Matusalen es 969.\n");
                return 0;
            } else if (a < 969) {
                printf("La edad de Matusalen es mayor.\n");
            } else {
                printf("La edad de Matusalen es menor.\n");
            }

            if (i == 2) {
                printf("Perdiste.\n");
            }
        }

        printf("Desea intentarlo nuevamente si o no): ");
        scanf("%s", respuesta);
    } while (strcmp(respuesta, "si") == 0);

    return 0;
}
