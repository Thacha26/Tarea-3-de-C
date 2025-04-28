#include <stdio.h>
#include <string.h> //se incluye esta bibioteca para manipular cadenas de carácteres y poder usar strcpy

//Se declara la estructura
struct Coche{
    //Se declaran los atributos que tendrá la estructura coche
    int año; 
    char modelo [30];
    char color [30];
    int precio; 
};

int main(){
    struct Coche chevy_pop = {2000, "Chevy Pop", "rojo", 178000}; //se crea la estructura que contiene diferentes variables
    printf("Coche antes de actualizar:\n año: %d\n modelo: %s\n color: %s\n precio: %d\n", chevy_pop.año, chevy_pop.modelo, chevy_pop.color, chevy_pop.precio); //se utiliza %d para imprimir los enteros y %s para imprimir los strings
    struct Coche *p_chevy = &chevy_pop; //Se utiliza struct Coche *p_chevy para declarar un puntero a la estructura coche, y el operador &, da la dirección de memoria de chevy_pop 
    strcpy(p_chevy->modelo, "Merces Benz");//p_chevy apunta al chevy_pop a su modelo
    strcpy(p_chevy->color, "Azul rey");//p_chevy apunta al chevy_pop a su color
    p_chevy->precio =
     4299900; //Se utiliza -> para acceder a el elemento precio de la estructura
    printf("\n");
    printf("Coche después de actualizar:\n año: %d\n modelo: %s\n color: %s\n precio: %d\n", chevy_pop.año, chevy_pop.modelo, chevy_pop.color, chevy_pop.precio );

    return 0;
}