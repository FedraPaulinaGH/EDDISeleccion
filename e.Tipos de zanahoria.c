/*Un tendero tiene cinco tipos de zanahoria, el tipo A = $15 /Kg., el tipo B = $18 /Kg. El tipo
C = $21/Kg. , el tipo D = $25/Kg. y el tipo F = $32 /Kg. Hacer un programa que pida el tipo
de zanahoria y la cantidad, luego calcule y muestre el total a pagar.*/

#include<stdio.h>

char pideTipo();
int pideCant();
int calculaTotal(x, kg);
void Imprime(total);

int main()
{
    int kg, total;
    char x;
    x=pideTipo();
    kg=pideCant(x);
    total=calculaTotal(x, kg);
    Imprime(total);
}

char pideTipo()
{
    char op;
    printf("Seleccione el tipo de zanahoria:\n");
    printf("Tipo A (o a) = $15 /Kg. \nEl tipo B (o b) = $18 /Kg. \nEl tipo C (o c) = $21/Kg. \nEl tipo D (o d) = $25/Kg. \nY el tipo F (o f) = $32 /Kg.\n");
    fflush(stdin);
    scanf("%c", &op);
    if (op == 'A' || op == 'a' || op == 'B' || op == 'b' || op == 'C' || op == 'c' || op == 'D' || op == 'd' || op == 'F' || op == 'f')
    {
        return(op);
    }
    else
    {
        pideTipo();
    }
}

int pideCant(x)
{
    int kg;
    printf("\nCuantos kg de zanahoria tipo %c quiere? ", x);
    scanf("%d", &kg);
    return kg;
}


int calculaTotal(x, kg)
{
    int total;
    switch (x)
    {
        case 'a':
        case 'A':
            total=kg*15;
            break;
        case 'b':
        case 'B':
            total=kg*18;
            break;
        case 'c':
        case 'C':
            total=kg*21;
            break;
        case 'd':
        case 'D':
            total=kg*25;
            break;
        case 'f':
        case 'F':
            total=kg*32;
            break;
    }
    return total;
}

void Imprime(total)
{
    printf("\nEl total de su compra es: $%d\n", total);

}
