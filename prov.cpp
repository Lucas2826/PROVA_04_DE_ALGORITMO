/*Quest�es 1
Quest�o sobre Arrays
Voc� foi contratado para desenvolver uma fun��o que analisa um conjunto de dados representado por um array de n�meros inteiros.
Sua tarefa � implementar uma fun��o em C que receba um array de n�meros inteiros e o tamanho desse array, e retorne a soma dos elementos do array.
Em seguida, escreva um programa que leia um n�mero n indicando o tamanho do array, leia n n�meros inteiros do usu�rio, e utilize a fun��o para calcular e imprimir a soma dos n�meros.*/



#include <stdio.h>

int main(){
	
	int A[5];//variavel
	int i,soma = 0;//variavl de controle e soma 
	
	for(i = 0 ; i<5; i ++){//incrementa um valor em cada posi�ao do vetor
		printf("dite o %d valor:\n", i + 1);// imprime na tela e incrementamais um a i
		scanf("%d", &A[i]); // um valor a i
		soma+=A[i];//soma os valores em cada posi�ao
		
	}

			printf("valor das somas:%d\n", soma);;// imprime na tela o valor das somas

		return 0;
}
/*https://www.youtube.com/watch?v=SAjelles_mo&t=8s
https://www.youtube.com/watch?v=5fSf9xSJK7c&t=1157s
*/
