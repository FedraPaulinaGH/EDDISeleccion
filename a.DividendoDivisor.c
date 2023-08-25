

/*Un programa que pida introducir dos números por el teclado, DIVIDENDO y DIVISOR. Si el
dividendo es divisible por divisor, el programa ha de mostrar el mensaje “DIVISIBLES” y si
no mostrar el texto “NO DIVISIBLES”.*/

#include <stdio.h>

int Captura(int *sor);
void Compara();

int main()
{
    int dendo, sor;
    dendo=Captura(&sor);
    Compara(dendo, sor);

}

int Captura(int *sor)
{
    int dividendo;
    printf("Dame el dividendo: ");
    scanf("%d", &dividendo);
    printf("Dame el divisor: ");
    scanf("%d", &*sor);

    return(dividendo);
}

void Compara(dendo, sor)
{
    int sobra;
    sobra=dendo%sor;
    if (sobra==0)
    {
        printf("DIVISIBLES");
    }
    else
    {
        printf("NO DIVISIBLES");
    }

}
