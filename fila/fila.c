#include "fila.h"



fila* criaFila(fila* f, int tamanho, bool expansivel, item i){

    f->vec = (item*) malloc(tamanho*sizeof(item));
    f->expansivel = expansivel;
    f->tamMax = tamanho;
    f->tam = 0;
    return f;

}



/* Entra um item na fila */
item entra(fila* f, item i);



/* Sai um item da fila */
item sai(fila* f);



/* Testa se a pilha está vazia */
bool filaVazia(fila* f){

    return f->tam == 0;

}



/* Retorna o tamanho atual da fila */
int tamanhoFila(fila* f){

    return f->tam;

}



/* Expande o tamanho da memória alocada para 2X o tamanho atual */
void realloca(fila* f){

    f->vec = (item*) realloc(f->vec, f->tamMax*2*sizeof(item));
    f->tamMax *= 2;

}



/* Imprime no console o estado atual da fila (adaptado para imprimir itens int) */
void imprimeFila(fila* f){

    if(filaVazia(f))
        printf("A fila esta vazia\n")


}