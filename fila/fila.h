#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


/* Item a ser armazenado na fila */
typedef int item;



/* Estrutura da fila */
typedef struct{

    int tam;
    int tamMax;
    bool expansivel;
    item* vec;

} fila;



/* Aloca dinamicamente a memória para a fila de acordo com o tamanho especificado */
fila* criaFila(fila* f, int tamanho, bool expansivel);



/* Entra um item na fila */
item entra(fila* f, item i);



/* Sai um item da fila */
item sai(fila* f);



/* Testa se a pilha está vazia */
bool filaVazia(fila* f);



/* Retorna o tamanho atual da fila */
int tamanhoFila(fila* f);



/* Expande o tamanho da memória alocada para 2X o tamanho atual */
void realloca(fila* f);



/* Imprime no console o estado atual da fila (adaptado para imprimir itens int) */
void imprimeFila(fila* f);