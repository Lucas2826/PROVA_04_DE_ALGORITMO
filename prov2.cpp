/*Questão 2
Implemente uma função em C que receba duas matrizes quadradas n x n e retorne uma terceira matriz que seja o resultado da multiplicação das duas matrizes.
Em seguida, escreva um programa que leia um número n indicando o tamanho das matrizes, leia duas matrizes n x n do usuário, utilize a função para calcular a matriz resultante da multiplicação e imprima essa matriz.*/

#include <stdio.h>

#define MAX 10 // Definindo o tamanho máximo das matrizes

// Função para multiplicar duas matrizes
void multiplicar_matrizes(int mat1[MAX][MAX], int mat2[MAX][MAX], int mat3[MAX][MAX], int n) {
    int l, c,s;

    // Inicializa a matriz resultante com 0
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            mat3[l][c] = 0;
        }
    }

    // Multiplicação das matrizes
    for (l = 0; l< n; l++) {
        for (c = 0;c < n;c++) {
            for (s = 0; s < n; s++) {
                mat3[l][c] += mat1[l][s] * mat2[s][c];
            }
        }
    }
}

// Função para ler uma matriz
void ler_matriz(int mat[MAX][MAX], int n) {
    int l, c;
    printf("Digite os elementos da matriz (%d x %d):\n", n, n);
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            printf("Elemento [%d][%d]: ", l, c);
            scanf("%d", &mat[l][c]);
        }
    }
}

// Função para imprimir uma matriz
void imprimir_matriz(int mat[MAX][MAX], int n) {
    int l, c;
    printf("Matriz (%d x %d):\n", n, n);
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            printf("%d ", mat[l][c]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX];
    int n;

    // Lê o tamanho das matrizes
    printf("Digite o tamanho das matrizes ( n x n, no maximo %d ): ", MAX);
    scanf("%d", &n);

    // Garantir que o tamanho não exceda o limite máximo
    if (n > MAX) {
        printf("O tamanho máximo permitido é %d.\n", MAX);
       
    }

    // Ler as duas matrizes
    printf("Leitura da primeira matriz:\n");
    ler_matriz(mat1, n);
    printf("Leitura da segunda matriz:\n");
    ler_matriz(mat2, n);

    // Multiplicar as matrizes
    multiplicar_matrizes(mat1, mat2, mat3, n);

    // Imprimir a matriz resultante
    printf("Matriz resultante da multiplicação:\n");
    imprimir_matriz(mat3, n);

    return 0;
}

/* https://www.youtube.com/watch?v=QA-W-8YMxjQ
https://www.youtube.com/watch?v=KKCmjnU2y3o
https://www.youtube.com/watch?v=8d1bH8bkj5Q&t=3s
https://chatgpt.com/
*/
