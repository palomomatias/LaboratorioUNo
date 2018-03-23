/*
se ingresan numeros(distintos de cero), no se sabe cuantos.
se pide mostrar:
 *cantidad de pares e impares.
 *porcentaje de numeros positivos y negativos
 *maximo y minimo.
 *maximo numero par
 *cantidad de numeros comprendidos entre 125 y 236.
*/








#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    int contadornegativos=0;
    int contadorpositivos=0;
    int contadornumeros=0;
    float porcentajepositivos;
    float porcentajenegativos;
    char letra='s';
    int par=0;
    int impar=0;

    while(letra!='n')
    {
            printf("\n ingrese un numero:");
            scanf("%d",&numeros);
             while(numeros==0)
    {
        printf("\n error ingrese un numero:");
        scanf("%d",&numeros);

    }

                if(numeros%2==0)
    {
       par++;

    }
    else
        {
           impar++;

        }
        if(numeros>0)
        {
            contadorpositivos++;
            }
            else
            {
                contadornegativos++;
            }



    printf("\ndesea contiunar?  ");
     letra=getch();


    }
    contadornumeros=contadornegativos+contadorpositivos;
    porcentajepositivos=(float)(contadorpositivos*100)/contadornumeros;
    porcentajenegativos=(100-porcentajepositivos);
    printf("la cantidad de numeros par son %d y los impar %d  ",par,impar);
    printf("\el procentaje positivo es %0.1f y el porcentaje negativo es %0.1f",porcentajepositivos,porcentajenegativos);







    return 0;

}
