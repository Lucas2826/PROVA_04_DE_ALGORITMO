/*Questões 1
Questão sobre Arrays
Você foi contratado para desenvolver uma função que analisa um conjunto de dados representado por um array de números inteiros.
Sua tarefa é implementar uma função em C que receba um array de números inteiros e o tamanho desse array, e retorne a soma dos elementos do array.
Em seguida, escreva um programa que leia um número n indicando o tamanho do array, leia n números inteiros do usuário, e utilize a função para calcular e imprimir a soma dos números.*/



#include <stdio.h>

int main(){
	
	int A[5];//variavel
	int i,soma = 0;//variavl de controle e soma 
	
	for(i = 0 ; i<5; i ++){//incrementa um valor em cada posiçao do vetor
		printf("dite o %d valor:\n", i + 1);// imprime na tela e incrementamais um a i
		scanf("%d", &A[i]); // um valor a i
		soma+=A[i];//soma os valores em cada posiçao
		
	}

			printf("valor das somas:%d\n", soma);;// imprime na tela o valor das somas

		return 0;
}
/*https://www.youtube.com/watch?v=SAjelles_mo&t=8s
https://www.youtube.com/watch?v=5fSf9xSJK7c&t=1157s
*/
