//Un programa que pida tres números y que después los imprima en orden descendente.
//no me sale :C voy a llorar
//ya me salió pero no jalaba porque le habia puesto || en vez de &&

#include<stdio.h>

int captura(int *d2, int *d3);
int OrdenaDes(int *d1, int *d2, int *d3);
int Imprime(int d1, int d2, int d3);

int main()
{
    int d1,d2,d3;
    d1 = captura(&d2, &d3);
    OrdenaDes(&d1, &d2, &d3);
    Imprime(d1, d2, d3);

}

int captura(int *d2, int *d3)
{
    int d1;
    printf("dame el primer numero: ");
    scanf("%d", &d1);

    printf("dame el segundo numero: ");
    scanf("%d", d2);

    printf("dame el tercer numero: ");
    scanf("%d", d3);

    return d1;

}


int OrdenaDes(int *d1, int *d2, int *d3)
{
    int menor, med, sup;
    if (*d1<*d2 && *d1<*d3)
    {
        if (*d2<*d3)
        {
            menor=*d1;
            med=*d2;
            sup=*d3;
        }
        else
        {
            menor=*d1;
            med=*d3;
            sup=*d2;
        }
    }

    else if (*d2<*d1 && *d2<*d3)
    {
        if (*d1<*d3)
        {
            menor=*d2;
            med=*d1;
            sup=*d3;
        }
        else
        {
            menor=*d2;
            med=*d3;
            sup=*d1;
        }

    }

   else if (*d3<*d1 && *d3<*d2)
    {
        if (*d1<*d2)
        {
            menor=*d3;
            med=*d1;
            sup=*d2;
        }
        else
        {
            menor=*d3;
            med=*d2;
            sup=*d1;
        }
    }
            *d1=sup;
            *d2=med;
            *d3=menor;

}

int Imprime(d1, d2, d3)
{
    printf("los valores en orden son: %d %d %d", d1, d2, d3);

}

