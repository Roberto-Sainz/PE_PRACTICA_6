#include<stdio.h>
#include "cadenas.h"
int BUSCAR(char c, char *cadena);
int main() {
    char cadena[100];
    char caracter;
    int resultado;

    printf("Ingrese Una Cadena:\n");
    scanf("%s", cadena);

    printf("Ingrese Un Caracter A Buscar:\n");
    scanf(" %c", &caracter);

    resultado=BUSCAR(caracter,cadena);

    if (resultado == -1) {
        printf("El Caracter No Esta En La Cadena.\n");
    } else {
        printf("El Caracter Esta En La Posicion %d\n", resultado);
    }

    return 0;
}
