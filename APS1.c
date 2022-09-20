#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void entrada_dados(int V[]);
int somar_numeros_recursivo(int q, int V[]);
void imprimir_vetor(int V[]);
int retornar_maior_valor(int n, int res[]);

int main()
{

    int vet_01[N], vet_02[N], vet_03[N], vet_04[N], vet_05[N];
    int soma[5];   // soma = resultado da soma.
    int resultado; // O maior resultado.

    // Aqui resolvi imprimir os valores dos elementos.

    printf("\n Primeiro Vetor: \n");

    entrada_dados(vet_01);
    imprimir_vetor(vet_01);

    printf("\n ....................");

    printf("\n \n Segundo Vetor: \n");

    entrada_dados(vet_02);
    imprimir_vetor(vet_02);

    printf("\n ....................");

    printf("\n \n Terceiro Vetor: \n");

    entrada_dados(vet_03);
    imprimir_vetor(vet_03);

    printf("\n ....................");

    printf("\n \n Quarto Vetor: \n");

    entrada_dados(vet_04);
    imprimir_vetor(vet_04);

    printf("\n ....................");

    printf("\n \n Quinto Vetor: \n");

    entrada_dados(vet_05);
    imprimir_vetor(vet_05);

    printf("\n ....................");

    // Estou alocando os resultados.

    soma[0] = somar_numeros_recursivo(N - 1, vet_01);
    soma[1] = somar_numeros_recursivo(N - 1, vet_02);
    soma[2] = somar_numeros_recursivo(N - 1, vet_03);
    soma[3] = somar_numeros_recursivo(N - 1, vet_04);
    soma[4] = somar_numeros_recursivo(N - 1, vet_05);

    resultado = retornar_maior_valor(5, soma);

    printf("\n ....................");

    printf("\n \n O maior valor eh: %d \n \n ", resultado);

    return 0;
}

void entrada_dados(int V[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        V[i] = rand() % 100;
    }
}

int somar_numeros_recursivo(int q, int V[])
{
    if (q == 0)
    {
        return V[0];
    }

    int r = 0;

    if (V[q] % 2 == 0)
    {
        r = V[q];
    }

    return r + somar_numeros_recursivo(q - 1, V);
}

void imprimir_vetor(int V[])
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("\n vetor [%d] = %d", i, V[i]);
    }
}
int retornar_maior_valor(int n, int res[])
{
    int i;

    int maior = res[0];

    for (i = 0; i < n; i++)
    {
        if (res[i] > maior)
        {
            maior = res[i];
        }
    }

    return maior;
}