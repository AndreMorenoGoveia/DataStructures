#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdarg.h>



/* Permite uma entrada padrão a função adicionaALista e removeDaLista */
int indexPadrao = -1;
#define adicionaALista(...) vrg(adicionaALista, __VA_ARGS__)
#define adicionaALista1(n, i) add(n, i, indexPadrao)
#define adicionaAlista2(n, i, index) add(n, i, index)
#define removeDaLista(...) vrg(removeDaLista, __VA_ARGS__)
#define adicionaALista1(n) pop(n, indexPadrao)
#define adicionaAlista2(n, index) pop(n, index)




/* Define o tipo do item armazenado na lista. Para alterar troque o int pelo desejado */ 
typedef int item;



/* Estrutura dos itens da lista */
typedef struct Node {

    item i;
    Node* next;

} Node;



/* Função que cria a lista ligada com o primeiro item i */
Node* criaLista(item i);



/* Adiciona um item a no index desejado ou ao final da lista caso deixe vazio o 
   parâmetro index */
void add(Node* n, item i, int index);



/* Pega o item do index fornecido da lista */
item pegaDaLista(Node* n, int index);



/* Retorna o index do item desejado da lista através de uma busca linear */
int buscaDaLista(item i);



/* Testa se a lista está vazia */
bool listaVazia(Node* n);



/* Remove um item da lista e o retorna e caso não haja index o ultimo item é removido */
item pop(Node* n, int index);



/* Retorna o tamanho da lista */
int tamanhoLista(Node* n);



/* Printa os valores da lista */
void printLista(Node* n);



/* Libera a memória alocada para a lista */
void destroiLista(Node* n);