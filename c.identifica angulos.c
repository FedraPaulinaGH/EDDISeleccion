/*
Un programa que pida el valor de un ángulo y muestre un letrero con el tipo de ángulo:
agudo, recto, llano, obtuso, etc.
*/

#include <stdio.h>

int Captura();
int Identifica(int *a);

int main()
{
    int a;
    a=Captura();
    Identifica(&a);

}

int Captura()
{
    int ang;
    printf("\nDame el angulo: ");
    scanf("%d", &ang);
    return(ang);
}

int Identifica(int *a)
{
    if(*a<=90)
    {
        if (*a>0 && *a<90)
        {
            printf("\nANGULO AGUDO\n");

        }
        else if (*a==90)
        {
            printf("\nANGULO RECTO\n");

        }
        else if (*a==0)
        {
            printf("\nANGULO NULO\n");
        }
        else
        {
            printf("\nNO PUEDO CALCULAR ESO\n");

        }
    }
    else if (*a>90 && *a<=360)
    {
        if (*a>90 && *a<180)
        {
            printf("\nANGULO OBTUSO\n");

        }
        else if(*a==180)
        {
            printf("\nANGULO LLANO\n");

        }
        else if (*a>180 && *a<360)
        {
            printf("\nANGULO CONCAVO\n");

        }
        else if (*a==360)
        {
            printf("\nANGULO TOTAL O COMPLETO\n");

        }
    }
    else
        {
            printf("\nNO PUEDO CALCULAR ESO\n");

        }

}
