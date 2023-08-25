/*Un programa que pida tres valores enteros e indique si con ellos se puede formar un
triángulo*/
#include <stdio.h>
int Captura();
int formaTriangulo(int *v1, int *v2, int *v3);

int main ()
{
    int v1, v2, v3;
    v1=Captura(&v2, &v3);
    formaTriangulo(&v1, &v2, &v3);
}

int Captura(int *v2, int *v3)
{
    int v1;
    printf("Dame el primer valor porfis: ");
    scanf("%d", &v1);
    printf("Dame el segundo valor porfa: ");
    scanf("%d", &*v2);
    printf("Dame el tercer valor por favor: ");
    scanf("%d", &*v3);
    return(v1);
}

int formaTriangulo(int *v1, int *v2, int *v3)
{
    if (*v1+*v2 > *v3 && *v1+*v3 > *v2 && *v2+*v3 > *v1)
    {
        printf("\nSe puede formar un triangulo ;)\n");
    }
    else
    {
        printf("\nNo se puede formar un triangulo\n");
    }
}
