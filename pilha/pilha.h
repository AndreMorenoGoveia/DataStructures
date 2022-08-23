#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Define o tipo do item armazenado na pilha. Para alterar troque o int pelo desejado */ 
typedef int item;



/* Estrutura da pilha */
typedef struct{
    
    item* v;
    int tam;
    int tamMax;
    bool expansivel;

} pilha;



/* Função utilizada para alocar memoria a uma pilha e retornar seu endereço, de acordo com
   as propriedades fornecridads */
pilha* criaPilha(int tamanho, bool expansivel);



/* Adiciona um item ao topo da pilha, alterando seu tamanho de acordo com suas propriedades
   e retornando true caso o item tenha sido empilhado com sucesso */
bool empilha(pilha* p, item i);



/* Remove e retorna o item do topo da pilha, diminuindo seu tamanho */
item desempilha(pilha* p);



/* Retorna o valor do topo da pilha, sem alterá-la */
item topoPilha(pilha* p);



/* Imprime os conteúdos da pilha */
void printPilha(pilha* p);



/* Libera a memória alocada pela pilha */
void destroiPilha(pilha* p);