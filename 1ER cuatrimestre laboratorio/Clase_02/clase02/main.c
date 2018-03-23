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
    int max;
    int min;
    int flag=0;
    int flagpar=0;
    int maximoPar;



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

          if(flagpar==0 || numeros>maximoPar)
    {
        maximoPar=numeros;
        flagpar=1;

    }
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
   /* if(flag==0)
    {
        max=numeros;
        min=numeros;
        flag=1;
    }
    else
        {
            if(numeros<min)
            {
                min=numeros;
            }
            if(numeros>max)
            {
                max=numeros;
            }

    }*/
    if(flag==0 || numeros>max)
    {
        max=numeros;

    }
    if(flag==0||numeros<min)
    {
        min=numeros;
        flag=1;
    }



    printf("\ndesea contiunar?  ");
     letra=getch();


    }
    contadornumeros=contadornegativos+contadorpositivos;
    porcentajepositivos=(float)(contadorpositivos*100)/contadornumeros;
    porcentajenegativos=(100-porcentajepositivos);
    printf("\nla cantidad de numeros par son %d y los impar %d  ",par,impar);
    printf("\nel procentaje positivo es %0.1f y el porcentaje negativo es %0.1f",porcentajepositivos,porcentajenegativos);
    printf("\nEl maximo es: %d",max);
    printf("\nEl minimo es: %d",min);
    printf("\nEl maximo par es: %d",maximoPar);






    return 0;

}
