#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


/* Item a ser armazenado na fila */
typedef int item;



/* Estrutura da fila */
typedef struct {

    item* elementos;
    int inicio;
    int final;
    int tam;
    int tamMax;
    bool expansivel;

} fila;



/* Retorna o ponteiro para uma fila configurada e com os itens dinamicamente alocados */
fila* criaFila(int tamanho, bool expansivel);



/* Entra um item na fila */
void entra(fila* f, item i);



/* Sai um item da fila que é retornado */
item sai(fila* f);



/* Testa se a fila está vazia */
bool filaVazia(fila* f);



/* Imprime no console o estado atual da fila (adaptado para imprimir itens int) */
void imprimeFila(fila* f);



/* Função que aumenta o tamanho da memória alocada para a fila, dobrado-a */
void realoca(fila* f);



/* Função responsavel por liberar a memória alocada */
void destroiFila(fila* f);