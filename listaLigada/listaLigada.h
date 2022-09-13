#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>




/* Define o tipo do item armazenado na lista. Para alterar troque o int pelo desejado */ 
typedef int item;



/* Estrutura dos itens da lista */
typedef struct Node {

    item i;
    struct Node* next;

} Node;



/* Função que cria a lista ligada com o primeiro item i */
Node* criaLista(item i);



/* Adiciona um item a no index desejado ou ao final da lista caso deixe com -1 o 
   parâmetro index */
void adicionaLista(Node* n, item i, int index);



/* Pega o item do index fornecido da lista */
item pegaDaLista(Node* n, int index);



/* Retorna o index do item desejado da lista através de uma busca linear */
int buscaDaLista(Node* n, item i);



/* Testa se a lista está vazia */
bool listaVazia(Node* n);



/* Remove um item da lista e o retorna e caso o index seja -1 ultimo item é removido */
item removeLista(Node* n, int index);



/* Retorna o tamanho da lista */
int tamanhoLista(Node* n);



/* Printa os valores da lista */
void printLista(Node* n);



/* Libera a memória alocada para a lista */
void destroiLista(Node* n);