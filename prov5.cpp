#include <ctype.h>

#include <stdio.h>
#include <string.h>

// Pontos atribuídos a cada letra do alfabeto
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Função para calcular a pontuação de uma palavra
int compute_score(string word);

int main(void)
{
    // Solicita ao usuário duas palavras
    string word1 = get_string("Jogador 1: ");
    string word2 = get_string("Jogador 2: ");

    // Calcula a pontuação de cada palavra
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Imprime o vencedor
    if (score1 > score2)
    {
        printf("Jogador 1 vence!\n");
    }
    else if (score2 > score1)
    {
        printf("Jogador 2 vence!\n");
    }
    else
    {
        printf("Empate!\n");
    }

    return 0;
}

int compute_score(string word)
{
    // Mantém o controle da pontuação
    int score = 0;

    // Calcula a pontuação para cada caractere
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        char c = word[i];
        if (isupper(c))
        {
            score += POINTS[c - 'A'];
        }
        else if (islower(c))
        {
            score += POINTS[c - 'a'];
        }
        // Caracteres não alfabéticos são ignorados
    }

    return score; // Corrigido para retornar a pontuação calculada
}

/*
https://stackoverflow.com/?newreg=240bb81d17a74942a1f66720bbd47bb5*/
