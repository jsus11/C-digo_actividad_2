#include <stdio.h>
#include <string.h>
#include <unistd.h>

// limpiar el búfer de entrada
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Variables
    char nombre[30];
    int edad;
    float estatura;
    float promedio[3];
    float suma_promedios = 0.0;
    char inicial;

    // Lectura de datos
    printf("Escriba su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    printf("Ingrese su altura (m): ");
    scanf("%f", &estatura);

    // Pedir los 3 promedios usando bucle for
    for (int i = 0; i < 3; i++) {
        printf("Ingrese su promedio %d: ", i + 1);
        scanf("%f", &promedio[i]);
        suma_promedios += promedio[i];
    }

    printf("Ingrese la inicial de su carrera: ");
    scanf(" %c", &inicial);

    sleep(1); // Pausa previa a la salida de datos

    // Impresión de registros (Textos corregidos)
    printf("\n===== REGISTROS DE DATOS ESTUDIANTIL =====\n");
    printf("Nombre completo: %s\n", nombre);
    printf("Edad: %d años\n", edad);
    printf("Estatura: %.2f m\n", estatura);
    printf("Promedio general: %.2f\n", suma_promedios / 3.0f);
    printf("Inicial de carrera: %c\n\n", inicial);

    printf("========================================\n");
    printf("FICHA ACADEMICA FINAL\n");
    printf("========================================\n");
    printf("Nombre del Estudiante: %s\n", nombre);
    printf("Inicial de carrera: %c\n", inicial);
    printf("Año de nacimiento (aprox): %d\n", 2026 - edad);
    printf("Estatura: %.2f m\n", estatura);
    printf("Promedio general: %.2f / 100\n", suma_promedios / 3.0f);
    printf("----------------------------------------\n");

    return 0;
}
