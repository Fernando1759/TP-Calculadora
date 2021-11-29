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
#include<conio.h>


void menuOpciones(int op1, int op2)
{
    system("cls");
    printf(LIGHTGREEN BOLD"\n    VALOR DE LOS OPERANDOS    \n"RESET);
    printf(YELLOW"******************************\n"RESET);
    printf(CYAN"  X = %d\n", op1);
    printf("  Y = %d\n"RESET, op2);
    printf(YELLOW"******************************"RESET);
    printf("\n");

    printf(LIGHTGREEN BOLD"\n             MENU DE OPCIONES             \n"RESET);
    printf(YELLOW"==========================================\n"RESET);
    printf(CYAN"1- Ingresar 1er operando (A = X)\n");
    printf("2- Ingresar 2do operando (B = Y)\n");
    printf("3- Calcular la suma (A + B)\n");
    printf("4- Calcular la resta (A - B)\n");
    printf("5- Calcular la division (A / B)\n");
    printf("6- Calcular la multiplicacion (A * B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operaciones\n");
    printf("9- Salir\n"RESET);
    printf(YELLOW"==========================================\n"RESET);
    printf(MAGENTA"Seleccione un numero del menu: "RESET);
}




int es_Numero(int numero)
{
    if (numero>=0 || numero <=9)
    {

        return 1;

    }
    return 0;
}




int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}


int func_sumar(int op1, int op2)
{
    int cuenta = op1 + op2;
    return cuenta;
}


int func_restar(int op1, int op2)
{
    int cuenta = op1 - op2;
    return cuenta;
}


int func_dividir(int op1, int op2, float* direccionDeVariableDeRetorno)
{
    float cuenta;
    int huboError = 1;
    if(op2 != 0)
    {
        cuenta = (float)op1 / op2;
        *direccionDeVariableDeRetorno = cuenta;
        huboError = 0;
    }
    else
    {
        huboError = 1;
    }
    return huboError;
}


int func_multiplicar(int op1, int op2)
{
    int cuenta = op1 * op2;
    return cuenta;
}


int func_factorialDeX(int op1)
{
    if(op1 == 0)
    {
        op1 = 1;
    }
    else
    {
        op1 = op1 * func_factorialDeX(op1 - 1);
    }
    return op1;
}



