#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/* Define o tipo do item armazenado na lista. Para alterar troque o int pelo desejado */ 
typedef int item;



/* Estrutura dos itens da lista */
typedef struct Node {

    item i;
    struct Node* frente;
    struct Node* tras;

} Node;



/* Função que cria a lista ligada */
Node* criaLista();



/* Adiciona um item ao final da lista */
void adicionaLista(Node* n, item it);



/* Retorna o index do item desejado da lista através de uma busca linear */
int buscaDaLista(Node* n, item i);



/* Testa se a lista está vazia */
bool listaVazia(Node* n);



/* Remove o último item da lista */
item removeLista(Node* n);



/* Retorna o tamanho da lista */
int tamanhoLista(Node* n);



/* Printa os valores da lista */
void printLista(Node* n);



/* Libera a memória alocada para a lista */
void destroiLista(Node* n);