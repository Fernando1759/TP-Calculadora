
#define RED          "\x1b[31m"
#define GREEN        "\x1b[32m"
#define YELLOW       "\x1b[33m"
#define BLUE         "\x1b[34m"
#define MAGENTA      "\x1b[35m"
#define CYAN         "\x1b[36m"
#define RESET        "\x1b[0m"
#define LIGHTGREEN   "\x1b[92m"
#define BOLD         "\x1b[1m"

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
{

    char seguir = 's';
    int num1 = 0;
    int num2 = 0;
    int opcion = 0;
    float resultadoFloat;
    int resultadoInt;
    int retHuboError;


    while(seguir == 's')
    {

        menuOpciones(num1, num2);

        fflush(stdin);
        scanf("%d", &opcion);




        while(!es_Numero(opcion))
        {

            fflush(stdin);
            scanf("%d", &opcion);


        }


        system("cls");

        switch(opcion)
        {

        case 1:

            num1 = getInt(MAGENTA"\nIngrese valor para el primer operando: \n"RESET);
            system("cls");
            break;


        case 2:
            num2 = getInt(MAGENTA"\nIngrese valor para el segundo operando: \n"RESET);
            system("cls");
            break;


        case 3:
            resultadoInt = func_sumar(num1, num2);
            printf(GREEN"\nEl resultado de la suma entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);
            system("pause");
            break;


        case 4:
            resultadoInt = func_restar(num1, num2);
            printf(GREEN"\nEl resultado de la resta entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);
            system("pause");
            break;


        case 5:
            retHuboError = func_dividir(num1, num2, &resultadoFloat);
            if(retHuboError == 1)
            {
                printf(RED"\nDIVISION IDEFINIDA, NO SE PUEDE DIVIDIR POR CERO\n"RESET);
                system("pause");
                break;
            }
            else
            {
                printf(GREEN"\nEl resultado de la division entre %d y %d es: %.2f\n"RESET, num1, num2, resultadoFloat);
                system("pause");
                break;
            }


        case 6:
            resultadoInt = func_multiplicar(num1, num2);
            printf(GREEN"\nEl resultado de la multiplicacion entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);
            system("pause");
            break;


        case 7:
            if(num1 < 0)
            {
                printf(RED"\nINDEFINIDO, HA INGRESADO UN NUMERO NEGATIVO\n"RESET);
            }
            else if(num1 > 11)
            {
                printf(RED"\nNUMERO MUY GRANDE, SE PUEDE INGRESAR HASTA EL NUMERO 11\n"RESET);
            }
            else
            {
                resultadoInt = func_factorialDeX(num1);
                printf(GREEN"\nEl factorial de %d es: %d\n"RESET, num1, resultadoInt);
            }
            system("pause");
            break;


        case 8:

            resultadoInt = func_sumar (num1,num2);
            printf(GREEN"\nEl resultado de la suma entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);



            resultadoInt =func_restar(num1,num2);
            printf(GREEN"\nEl resultado de la resta entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);



            resultadoInt = func_multiplicar(num1,num2);
            printf(GREEN"\nEl resultado de la multiplicacion entre %d y %d es: %d\n"RESET, num1, num2, resultadoInt);



            resultadoInt =func_factorialDeX(num1);
                if(num1 < 0)
            {
                printf(RED"\nINDEFINIDO, HA INGRESADO UN NUMERO NEGATIVO\n"RESET);
            }
            else if(num1 > 11)
            {
                printf(RED"\nNUMERO MUY GRANDE, SE PUEDE INGRESAR HASTA EL NUMERO 11\n"RESET);
            }
            else
            {
                resultadoInt = func_factorialDeX(num1);
                printf(GREEN"\nEl factorial de %d es: %d\n"RESET, num1, resultadoInt);
            }


            retHuboError = func_dividir(num1, num2, &resultadoFloat);

            if(retHuboError == 1)
            {
                printf(RED"\nDIVISION IDEFINIDA, NO SE PUEDE DIVIDIR POR CERO\n"RESET);
                system("pause");
                break;
            }
            else
            {
                printf(GREEN"\nEl resultado de la division entre %d y %d es: %.2f\n"RESET, num1, num2, resultadoFloat);
                system("pause");
                break;
            }
            system("pause");
            break;


        case 9:
            printf(BLUE"PROGRAMA FINALIZADO"RESET);
            seguir = 'n';
            break;


        default:
            printf(RED"HA INGRESADO UN DATO INCORRECTO\n"RESET);
            system("pause");
            break;
        }
    }
    return 0;
}



