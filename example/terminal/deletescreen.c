#include <stdio.h>

int main() {
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");

    // Esperar un poco antes de borrar para que puedas ver el mensaje
    getchar();

    // Secuencia de escape para borrar la pantalla
    printf("\033[2J");
    printf("\033[H");

	printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("\033[31m");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");
    printf("Este es un mensaje.\n");

    return 0;
}
