#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <ctype.h>
#include <wchar.h>

void main() {
    setlocale(LC_ALL, "");
    int menu, sizePreguntas = 0;
    wchar_t preguntas[50][12];
    int pass = 0;

    do {
        system("clear");
        printf(" --- Bienvenido a: 100 Ingenieros Dijeron --- \n");
        printf("\n Que deseas hacer? \n");
        printf("\n 1 .- Editar Banco de Palabras.");
        printf("\n 2 .- Jugar!");
        printf("\n 3 .- Salir \n\n ---> Opcion: ");
        scanf("%i", &menu);
        while (getchar() != '\n') {};

        switch (menu) {
            // Editar Banco de Palabras
            case 1:
                system("clear");
                printf(" --- 100 Ingenieros Dijeron ---> Editar Banco de Palabras ---");
                printf("\n 1 .- Llenar Preguntas");
                printf("\n 2 .- Llenar Respuestas");
                printf("\n 3 .- Eliminar Oración \n\n ---> Opcion: ");
                scanf("%i", &menu);

                switch (menu) {
                    /* Minimo 4 respuestas, maximo 6 respuestas, cada respuesta debe tener 4 sinonimos*/
                    // Llenar preguntas
                    case 1:
                        do {
                            while (getchar() != '\n') {};
                            pass = 0;
                            system("clear");
                            printf(" --- 100 Ingenieros Dijeron ---> Editar Banco de Palabras ---> Llenar preguntas ---");
                            if (sizePreguntas < 12) {
                                do {
                                    pass = 0;
                                    printf("\n Ingrese una pregunta para el juego: ");
                                    scanf("%l[^\n]", preguntas[sizePreguntas]);

                                    printf("%i", toascii(preguntas[sizePreguntas][0]));

                                    for (int j = 0; j < sizeof(preguntas[sizePreguntas]); ++j) {
                                        if (preguntas[sizePreguntas][j] != '\0') {
                                            if (toascii(toupper(preguntas[sizePreguntas][j])) >= 65 ||
                                                toascii(toupper(preguntas[sizePreguntas][j])) <= 90) {
                                                printf("hola");
                                            } else {
                                                printf(" Se ingreso un caracter invalido... ");
                                            }
                                        } else {
                                            break;
                                        }
                                    }


                                    sizePreguntas++;
                                } while (pass);
                            } else {
                                printf("\n Ya has alcanzado el maximo de 12 preguntas. \n");
                            }
                        } while (pass);
                        break;
                        // Llenar respuestas
                    case 2:
                        /*
                        do {
                            pass = 0;
                            system("clear");
                            printf(" --- 100 Ingenieros Dijeron ---> Editar Banco de Palabras ---> Llenar preguntas ---");
                            printf("\n Ingrese una pregunta para el juego: ");
                            scanf("%ls[^\n]", preguntas);

                            printf("Pregunta: %ls", preguntas);
                            while (getchar() != '\n') {};
                        } while (pass);
                         */
                        break;
                        // Eliminar oracion
                    case 3:
                        break;
                    default:
                        printf("\n Caracter invalido.... \n");
                        break;
                }
                break;
                // Juego
            case 2:
                system("clear");
                printf(" --- 100 Ingenieros Dijeron. [ _ _ _] \n");
                printf(" Meciona algo opuesto a: \n");
                printf("\n 1. ..............................    ....");
                printf("\n 2. ..............................    ....");
                printf("\n 3. ..............................    ....");
                printf("\n 4. ..............................    ....");
                printf("\n 5. ..............................    ....");
                printf("\n\n Ingrese su respuesta: ");

                break;
                // Salir
            case 3:
                break;
            default:
                printf("\n Caracter invalido.... \n");
                break;
        }
    } while (menu != 3);
}
