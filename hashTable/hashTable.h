#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/* Item armazenado na Hash Table */
typedef int item;



/* Estrutura das listas ligadas da HashTable */
typedef struct lista {

    item valor;
    struct lista* next;

} lista;



/* Estrutura da Hash Table */
typedef struct {

    lista** elementos;
    int tam;
    int tamMax;

} tabela;



/* Função que aloca dinamicamente a memória para a tabela */
tabela* cria(int tamanho);



/* Função de hashing para gerar as posições de cada item */
int hash(tabela* t, item x);



/* Função que insere o item desejado na tabela, alocando memória para tal */
void insere(tabela* t, item x);



/* Função que remove o item determinado da tabela, liberando sua memória */
void remove(tabela* t, item x);



/* Função que procura um item na tabela */
bool busca(tabela* t, item x);



/* Função que printa os itens da função (adaptado para inteiros)*/
void print_tab(tabela* t);



/* Função que libera toda a memória alocada pela HashTable */
void destroiTab(tabela* t);