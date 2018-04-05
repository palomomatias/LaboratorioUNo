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
int pedirNumeroPar();

int getEntero(char* mensaje,char* mensajeError, int maximo, int minimo);

int main()
{
int numero;
numero=getEntero("ingrese su edad","reingrese su edad",199,1);
printf("el entero ingresado es : %d",numero);

/*
   int numero;
   numero=getEntero("ingrese su edad",199,1);

   printf("en entero ingresado es : %d",numero);*/

/*
   numero=sumar(3,3);
   printf("%d\n",numero);
   float numero2;
   numero2=dividirEnteros(10,3);
   printf("%f\n",numero2);

   int sePudo;
   sePudo=pedirNumeroPar();

   if(sePudo==0)
   {
    printf("ok");

   }
   else
    {
    printf("mal");
   }

*/
    return 0;
}// del main

/** \brief
 *
 * \param mensaje char*
 * \param maximo int
 * \param minimo int
 * \return int
 *
 */

 int getEntero(char* mensaje,char* mensajeError, int maximo, int minimo)
 {
     int entero=-1;
     do{
        printf("%s",mensaje);
        scanf("%d",&entero);
        if(entero<maximo&&entero>minimo)
        {
            break;
        }
        else
        {printf("%s",mensajeError);}

        }while(0);
        return entero;


 }

/*int getEntero(char* mensaje,int maximo, int minimo)
{
    int entero;
    do{
        printf("%s",mensaje);
        scanf("%d",&entero);
    }while(entero< minimo || entero>maximo);
    return entero;
}*/
int sumar(int numeroUno,int numeroDos)
{
    int resultado=0;
    resultado= numeroUno+numeroDos;
    return resultado;
}
float dividirEnteros(int dividiendo,int divisor)
{
   float resultado=0;
   resultado=(float)dividiendo/divisor;
   return resultado;
}

int pedirNumeroPar()
{
    int respuesta=-1;
    int numero;
    printf("ingrese un numero");
    scanf("%d",&numero);

    if(numero%2==0 && numero!=0)
    {
        respuesta=0;
    }

    return respuesta;


}

