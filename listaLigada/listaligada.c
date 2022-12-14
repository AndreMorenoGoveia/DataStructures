#include "listaLigada.h"



Node* criaLista(){

    Node* lista = NULL;
    return lista;

}


void adicionaLista(Node* n, item it){

    if(n == NULL){
        n = (Node*) malloc(sizeof(Node));
        n->next = NULL;
        n->i = it;
    }
    else adicionaLista(n->next, it);

}



bool buscaDaLista(Node* n, item i){

    if(n == NULL)
        return false;

    if(n->i = i)
        return true;

    return buscaDaLista(n->next, i);

}



bool listaVazia(Node* n){

    return (n == NULL);

}



item removeLista(Node* n){

    if(n == NULL)
        return;

    item i;

    if(n->next == NULL){
        i = n->i;
        free(n);
        n = NULL;
        return i;
    }

    return removeLista(n->next);

}



int tamanhoLista(Node* n){

    if(n->next == NULL)
        return 1;

    return tamanhoLista(n) + 1;

}



void printLista(Node* n){

    if(n->next != NULL){

        printf("%d --> ", n->i);
        printLista(n->next);

    }

    else
        printf("%d\n", n->i);

}



void destroiLista(Node* n){

    if(n->next != NULL)
        destroiLista(n->next);

    free(n);

}