#include <stdio.h>
#include <string.h>

struct mi_registro {
    int dato_entero;
    float dato_float;
    char dato_cadena[30];
    int dato_vector[10];
};

int main() {
    struct mi_registro variable;
    variable.dato_entero = 20;
    variable.dato_float = 5.5;
    strcpy(variable.dato_cadena, "nueva cadena");
    variable.dato_vector[0] = 4;

    printf("El dato de tipo float de mi registro es: %.2f\n", variable.dato_float);

    struct mi_registro vector[10];
    vector[0].dato_entero = 7;

    printf("El dato de tipo entero del primer elemento del vector es: %d\n", vector[0].dato_entero);

    
}
