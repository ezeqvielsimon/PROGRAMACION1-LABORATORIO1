#include <stdio.h>
#include <stdlib.h>
#include "Libreria.h"


float suma(float a,float b) //FUNCION SUMA, RECIBE 2 FLOATS
{
    float resultado=a+b;    //LOS SUMA
    return resultado;       //RETORNA EL RESULTADO
}
float resta(float a,float b) //FUNCION RESTA, RECIBE 2 FLOATS
{
    float resultado=a-b;    //LOS RESTA
    return resultado;       //RETORNA EL RESULTADO
}
float multiplicacion(float a,float b) //FUNCION MULTIPLICACION, RECIBE 2 FLOATS
{
    float resultado=a*b;        //LOS MULTIPLICA
    return resultado;           //RETORNA EL RESULTADO
}
float division(float a,float b) //FUNCION DIVISION, RECIBE 2 FLOATS
{
    float resultado=a/b;        //LOS DIVIDE
    return resultado;           //RETORNA EL RESULTADO
}
float factorial(float a) //FUNCION FACTORIAL, RECIBE UN FLOAT
{
    if(a==0||a==1)      //ANALIZA SI EL FLOAT INGRESADO ES CERO O UNO
    {
        return 1;           //RETORNA 1
    }
    else
    {
        return a*factorial(a-1);   //DE LO CONTRARIO SE APLICA LA RECURSIVIDAD PARA LLEGAR AL FACTORIAL DEL NUMERO INGRESADO
    }
}
