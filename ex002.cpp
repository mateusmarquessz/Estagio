#include <ctype.h>
#include <stdio.h>
int main()
{
    int termos, numero = 1, numero_anterior = 0, aux;
    printf("Digite o numero de termos da série de Fibonacci: ");
    scanf("%d", &termos);
    for (int i = 0; i < termos; i++)
    {
        printf("%d\n", numero);
        aux = numero;
        numero += numero_anterior;
        numero_anterior = aux;
    }
    return 0;
}