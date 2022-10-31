#include "listaLigadaDupla.h"



Node* criaLista(){

    Node* lista = NULL;
    return lista;

}


void adicionaLista(Node* n, item it){

    if(n == NULL){
        n = (Node*) malloc(sizeof(Node));
        n->frente = NULL;
        n->tras == NULL;
        n->i = it;
        return;
    }

    if(n->frente == NULL){
        n->frente = (Node*) malloc(sizeof(Node));
        n->frente->tras = n;
        n->frente->frente = NULL;
        n->frente->i = it;
        return;
    }

    return adicionaLista(n->frente, it);

}



bool buscaDaLista(Node* n, item i){

    if(n == NULL)
        return false;

    if(n->i = i)
        return true;

    return buscaDaLista(n->frente, i);

}



bool listaVazia(Node* n){

    return (n == NULL);

}



item removeLista(Node* n){

    if(n == NULL)
        return;

    item i;

    if(n->frente == NULL){
        i = n->i;
        free(n);
        n = NULL;
        return i;
    }

    return removeLista(n->frente);

}



int tamanhoLista(Node* n){

    if(n->frente == NULL)
        return 1;

    return tamanhoLista(n) + 1;

}



void printLista(Node* n){

    if(n->frente != NULL){

        printf("%d <--> ", n->i);
        printLista(n->frente);

    }

    else
        printf("%d\n", n->i);

}



void destroiLista(Node* n){

    if(n->frente != NULL)
        destroiLista(n->frente);

    free(n);

}