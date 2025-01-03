#include <stdio.h>

int main(int argc, char *argv[]) {
    float diametro, altura, sumaDiametros = 0, sumaAlturas = 0;
    int contador = 0;
    char respuesta;

    for (respuesta = 'S'; respuesta == 'S' || respuesta == 's'; ) {
        printf("Ingrese el diametro del tronco en cm: ");
        scanf("%f", &diametro);
        printf("Ingrese la altura del tronco en metros: ");
        scanf("%f", &altura);

        sumaDiametros = sumaDiametros + diametro;
        sumaAlturas = sumaAlturas + altura;
        contador= contador + 1;

        printf("Desea ingresar otro tronco? (S/N): ");
        scanf(" %c", &respuesta);
    }

    float promedioDiametro = sumaDiametros / contador;
    float promedioAltura = sumaAlturas / contador;

    printf("Promedio de diametro de los troncos: %.2f cm\n", promedioDiametro);
    printf("Promedio de altura de los troncos: %.2f m\n", promedioAltura);

    return 0;
}