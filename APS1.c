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

    int Vetor_1[N], Vetor_2[N], Vetor_3[N], Vetor_4[N], Vetor_5[N];
    int soma[5];   // soma = resultado.
    int resultado; // O maior resultado da soma dos pares.

    

    printf("\n Primeiro Vetor: \n");

    entrada_dados(Vetor_1);
    imprimir_vetor(Vetor_1);

    printf("\n ....................");

    printf("\n \n Segundo Vetor: \n");

    entrada_dados(Vetor_2);
    imprimir_vetor(Vetor_2);

    printf("\n ....................");

    printf("\n \n Terceiro Vetor: \n");

    entrada_dados(Vetor_3);
    imprimir_vetor(Vetor_3);

    printf("\n ....................");

    printf("\n \n Quarto Vetor: \n");

    entrada_dados(Vetor_4);
    imprimir_vetor(Vetor_4);

    printf("\n ....................");

    printf("\n \n Quinto Vetor: \n");

    entrada_dados(Vetor_5);
    imprimir_vetor(Vetor_5);

    printf("\n ....................");

   

    soma[0] = somar_numeros_recursivo(N - 1, Vetor_1);
    soma[1] = somar_numeros_recursivo(N - 1, Vetor_2);
    soma[2] = somar_numeros_recursivo(N - 1, Vetor_3);
    soma[3] = somar_numeros_recursivo(N - 1, Vetor_4);
    soma[4] = somar_numeros_recursivo(N - 1, Vetor_5);

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
