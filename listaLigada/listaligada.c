#include "listaLigada.h"



Node* criaLista(item i){

    Node* n = malloc(sizeof(Node));
    n->i = i;
    n->next = NULL;
    return n;

}



void add(Node* n, item i, int index){

    if(index < 0);

        

}



item pegaDaLista(Node* n, int index);



int buscaDaLista(item i);



bool listaVazia(Node* n);



item pop(Node* n, int index);



int tamanhoLista(Node* n);



void printLista(Node* n);



void destroiLista(Node* n);