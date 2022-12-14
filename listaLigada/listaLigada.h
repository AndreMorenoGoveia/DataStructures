#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/* Define o tipo do item armazenado na lista. Para alterar troque o int pelo desejado */ 
typedef int item;



/* Estrutura dos itens da lista */
typedef struct Node {

    item i;
    struct Node* next;

} Node;



/* Função que cria a lista ligada */
Node* criaLista();



/* Adiciona um item ao final da lista*/
void adicionaLista(Node* n, item i);



/* Retorna true caso o item tenha sido encontrado na lista */
bool buscaDaLista(Node* n, item i);



/* Testa se a lista está vazia */
bool listaVazia(Node* n);



/* Remove o último item da lista e o retorna */
item removeLista(Node* n);



/* Retorna o tamanho da lista */
int tamanhoLista(Node* n);



/* Printa os valores da lista */
void printLista(Node* n);



/* Libera a memória alocada para a lista */
void destroiLista(Node* n);