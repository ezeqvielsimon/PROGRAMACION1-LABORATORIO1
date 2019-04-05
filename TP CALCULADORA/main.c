#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"


int main()
{
    int opcion;
    char seguir='s';
    float pOperando=0;
    float sOperando=0;

    do
    {
        printf("Trabajo practico n1\n");
        printf("Alumno: Ezequiel Simon\n");
        printf("Division: 1 B\n");
        printf("\n");
        printf("Calculadora\n");
        printf("\n");
        printf("1.Ingresar primer operando(A=%.2f)\n",pOperando);
        printf("2.Ingresar segundo operando(B=%.2f)\n",sOperando);
        printf("3.Realizar operaciones\n");
        printf("4.Mostrar resultados\n");
        printf("5.Salir\n");
        printf("Ingrese su opcion:\n");
        scanf("%d",&opcion);
        switch(opcion)
        {
        case 1:
            printf("Ingrese primer operando:\n");
            scanf("%f",&pOperando);
            break;
        case 2:
            printf("Ingrese segundo operando:\n");
            scanf("%f",&sOperando);
            break;
        case 3:
            printf("Realizando operaciones...\n");
            suma(pOperando,sOperando);
            resta(pOperando,sOperando);
            multiplicacion(pOperando,sOperando);
            division(pOperando,sOperando);
            factorial(pOperando);
            factorial(sOperando);
            break;
        case 4:
            printf("Mostrando resultados:\n");
            printf("La suma de %.2f y %.2f es %.2f\n",pOperando,sOperando,suma(pOperando,sOperando));
            printf("La resta de %.2f y %.2f es %.2f\n",pOperando,sOperando,resta(pOperando,sOperando));
            printf("La multiplicacion de %.2f por %.2f es %.2f\n",pOperando,sOperando,multiplicacion(pOperando,sOperando));
            if(pOperando==0||sOperando==0)
                printf("No es posible dividir por cero............\n");
            else
                printf("La division de %.2f y %.2f es %.2f\n",pOperando,sOperando,division(pOperando,sOperando));
            printf("El factorial de %.2f es %.2f\n",pOperando,factorial(pOperando));
            printf("El factorial de %.2f es %.2f\n",sOperando,factorial(sOperando));
            break;
        case 5:
            printf("Hasta luego!\n");
            seguir='n';
            break;
        }

        system("pause");
        system("cls");
    }while(seguir=='s');





    return 0;
}
