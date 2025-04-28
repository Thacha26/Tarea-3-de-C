//Crea una función que retorne una estructura Punto con coordenadas aleatorias. (1 pto.)
//Usé la función random para que se generen coordenadas aleatorias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


struct Punto {
    int X;
    int Y;
};

struct Punto aleatorio(){
    struct Punto coordenada;
    coordenada.X = rand() % 101;
    coordenada.Y = rand() % 101;
    return coordenada;
   }

int main(){

    srand(time(NULL)); //

 
        struct Punto punto = aleatorio();

        printf("Coordenadas del punto (x, y): (%d, %d)\n", punto.X, punto.Y);
        

        return 0;
}