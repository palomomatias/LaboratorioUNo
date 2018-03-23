#include <stdio.h>
#include <stdlib.h>

int main()
{
  int numeroUno;
    int numeroDos;
    int numeroTres;
    int contador=0;
    printf("ingrese su edad:");
    scanf("%d",&numeroUno);
    printf("ingrese su edad:");
    scanf("%d",&numeroDos);
    printf("ingrese su edad:");
    scanf("%d",&numeroTres);

    if(numeroUno>numeroDos&&numeroUno>numeroTres)
    {
        contador=numeroUno;
    }
}
