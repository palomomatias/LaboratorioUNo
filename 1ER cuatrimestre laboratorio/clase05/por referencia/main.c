#include <stdio.h>
#include <stdlib.h>
#define cantidad 5
/*
cambiar

main

*/


void cambiarEntero(int numero);
void cambiarVector(int listadoDeNumeros[]);/*defino un tipo de datos*/
void cargarVectorConMenosUno(int listado[cantidad]);




int main()
{
    int edad=22;
    int edades [3];
    int test;
    cambiarEntero(edad);
    printf("%d\n",edad);
    cambiarVector(edades);
    printf("%d\n",edades[0]);

    return 0;

}
void cargarVectorConMenosUno(int listado[cantidad])
{
    int i;
    int tamanio;
    // aca saco el tamaño
    int tamanioArray=sizeof (listado);
    printf("asdsadsad %d",tamanioArray);
    for(i=0;i<tamanioArray;i++)
    {
        listado[i]=-1;
    }
}
void cambiarEntero(int numero)
{
    numero=666;
}
void cambiarVector(int listadoDeNumeros[])
{
   listadoDeNumeros[0]=666;
}
