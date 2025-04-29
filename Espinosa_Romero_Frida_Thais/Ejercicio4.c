/*Crea una estructura Departamento que contenga un arreglo de Empleado dinámico (Sé que
es un tema que no se ha visto, sin embargo, no es complejo. Hint (1): Usen Malloc e
investigen como es una estructura dinámica). Hint (2): Para asignación de la memoria
puede usar: sales.employees = (Employee*)malloc(sales.nEmployees *
sizeof(Employee)); (1.5 pts.)*/

#include <stdio.h>
#include <stdlib.h> //Se debe de incluir al trabajar con memoria dinámica, para malloc, free y null

struct Employee{
    int numeroEmpleado;
    int edad;
    float sueldo;
};

//Creía que el orden de poner las estrcucturas no importaba, pero no es así, pues Departamento necesita saber ese valor
struct Departamento{

    int numeroDeDepartamento;
    int pisoDeDepartamento;
    int nEmployees; //cantidad de empleados
    struct Employee *employees; //aputador al arreglo dinámico de los emplesdos
};

int main(){
struct Departamento sales; //Departamento al que se le asignan un número de empleados y un piso 
int i; // se declara la i para poder usar el for

sales.numeroDeDepartamento = 512;
sales.pisoDeDepartamento = 7;

printf("¿Cuántos empleados quieres tener?\n");
scanf("%d", &sales.nEmployees); //Se le pide al usuario que meta un número y este se asigna a la posición de memoria que hay en sales.nEmployees


//Por seguridad se multiplica el número de elementos que se quiere reservar por el tamaño del tipo de dato
sales.employees = (struct Employee*)malloc(sales.nEmployees * sizeof(struct Employee));
if (sales.employees == NULL) { //por si falla malloc
    printf("Error al asignar memoria.\n"); //Se verifica que la memoria no devuelva null
    return 1;
}


//Se itera i desde 0 hasta que sea menor que la cantidad de empleados que quiere el usuario
for (i = 0; i < sales.nEmployees; i++) {
        sales.employees[i].numeroEmpleado = 1 + i ;
        sales.employees[i].edad = 20 + i; 
        sales.employees[i].sueldo = 5600;
        }


    //Se imprimen los datos de los empleados que el usuario pidió
    printf("Número: %d, Piso: %d\n", sales.numeroDeDepartamento, sales.pisoDeDepartamento);
    printf("Total de empleados: %d\n", sales.nEmployees);
    
    printf("Empleados:\n");
    for (i = 0; i < sales.nEmployees; i++) {
        printf("Empleado %d:\n", i + 1);
        printf("  Nombre: %d\n", sales.employees[i].numeroEmpleado);
        printf("  Edad: %d\n", sales.employees[i].edad);
        printf("  Sueldo: %.2f\n\n", sales.employees[i].sueldo);
    }


    free(sales.employees); //Se libera la memoria cuando ya no la utilizamos
return 0;

}