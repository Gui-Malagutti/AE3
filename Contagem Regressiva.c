/******************************************************************************

03 Contagem Regressiva (até 0) de X numeros inteiros usando vetores

Guilherme Malagutti dos Santos

*******************************************************************************/
#include <stdio.h>
#define tamanho 3

int chamado()
{
    int v[tamanho];
    printf("Defina %d numeros para contagem regressiva: ", tamanho);
    
    for (int i = 0; i < tamanho ; i++)
    {
        scanf("%d", &v[i]);
    }
    
    for( int i = 0; i < tamanho; i++)
    printf("\nVetor [%d] = %d", i , v[i]);
    
    return v;
}


int regressiva(int a[tamanho])
{
    for(int i = 0; i < a[i]; i++)
    {
    
    }
    
}


int main()
{
    int v = chamado();
    printf("\nvalor = %d ", v);
    
    return 0;
}

