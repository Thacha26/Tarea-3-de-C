/**Crea un arreglo de estructuras Producto (nombre, precio, cantidad) y calcula el valor total
de inventario (0.5 pts.)
**/

#include <stdio.h>
#include <string.h> //Se incluye esta biblioteca para poder usar strcpy

struct Producto{ //se crea la estructura Producto con sus atributos

    char nombre [30]; //el nombre puede ser de 30 carácteres máximo
    float precio;
    int cantidad;
};

int main(){

struct Producto tiendita[5]; //Se crea el arreglo para 5 estructuras Producto
float totalDeInventario; //Se inicializa la variable para el total del inventario
float totalDeInventarioPorProducto[5]; //Se inicializa la variable para el total del inventario por producto

//Se esciben cada uno de los productos que pueden existir en la tiendita
strcpy (tiendita[0].nombre, "Jamón Fud");
tiendita[0].precio = 45.456;
tiendita[0].cantidad = 20;


strcpy(tiendita[1].nombre, "Vaca Blanca");
tiendita[1].precio = 21.123;
tiendita[1].cantidad = 43;

strcpy(tiendita[2].nombre, "Lucky Gummys");
tiendita[2].precio = 161.49;
tiendita[2].cantidad = 7;

strcpy(tiendita[3].nombre, "Chocolate Abuelita");
tiendita[3].precio = 103.69;
tiendita[3].cantidad = 13;

strcpy(tiendita[4].nombre, "Soju Durazno");
tiendita[4].precio = 65.00;
tiendita[4].cantidad = 17;

/*se inicia con i = 0, y si i es menor que 5, entonces se sigue recorriendo el arreglo, terminando con el producto 4
El arreglo siempre inicia en 0, no en 1. después de cada iteración se aumenta 1 para seguir avanzando hasta llegar a i = 4
*/
for(int i = 0; i < 5; i++){ 
    //Es importante que se ponga el [i] para que reconozca en que producto está y no sume valores aleatorios
    totalDeInventarioPorProducto[i] += tiendita[i].precio * tiendita[i].cantidad;  //El total del inventario se obtiene al multiplicar el precio de cada producto pot la cantidad de cada producto
    printf("\n");
    printf("El valor total del producto %s es de: %.5f", tiendita[i].nombre, totalDeInventarioPorProducto[i]);
    totalDeInventario += totalDeInventarioPorProducto[i]; //Se suma el valor total de todos los productos y se asigna al total del inventario

    
}

printf("\nEl total total de los productos es de: %.5f \n", totalDeInventario); //Se obtiene el valor total del inventario de la tiendita



return 0;

}