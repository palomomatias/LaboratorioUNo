#include <stdio.h>
#include <stdlib.h>
/*
reglas: dentro del main llamar la funcion, afuera de main definir la estructucra y hacer codigo logico
void: no retorna nada
1) prototipo firma de la funcion que es unica no puede haber 2 iguales, esta compuesta por el tipo de dato. arriba del main tengo
que poner la firma de la funcion
2) invocacion
3) definir la funcionalidad que va a hacer en la funcion punto y coma se lo saco y habro llaves


void saludar(void);prototipo (firma)de la funcion

int main()
{
    saludar();invocacion
    return 0;
}
void saludar(void)desarrolar o implementar(logica) la funcion
{
    printf("Hola mundo\n");

}
*/

void saludar (saludar);
int sumar(int numeroUno,int numeroDos);
float dividirEnteros(int dividiendo,int divisor);

int main()
{
   int numero;
   numero=sumar(3,3);
   printf("%d\n",numero);
   float numero2;
   numero2=dividirEnteros(10,3);
   printf("%f\n",numero2);

    return 0;
}
int sumar(int numeroUno,int numeroDos)
{
    int resultado=0;
    resultado= numeroUno+numeroDos;
    return resultado;
}
float dividirEnteros(int dividiendo,int divisor)
{
   float resultado2=0;
   resultado2=(float)dividiendo/divisor;
   return resultado2;
}
