#include "listaLigada.h"



Node* criaLista(item i){

    Node* n = (Node*) malloc(sizeof(Node));
    n->i = i;
    n->next = NULL;
    return n;

}


void adicionaLista(Node* n, item it, int index){

    Node* i;
    int lim, cont = 0;

    if(index < 0)
        lim = tamanhoLista(n) - 1;
    else
        lim = index;
     
     for(i = n; cont < lim; i = i->next) cont++;

    i->next = (Node*) malloc(sizeof(Node));
    i = i->next;
    i->i = it;
    i->next = NULL;

}



item pegaDaLista(Node* n, int index){

    if(index == 0)
        return n->i;

    else
        return pegaDaLista(n->next, index - 1);

}



int buscaDaLista(Node* n, item i){

    if(n->i == i)
        return tamanhoLista(n) - 1;

    else
        return buscaDaLista(n->next, i) + 1;

}



bool listaVazia(Node* n){

    return (n == NULL);

}



item removeLista(Node* n, int index){

    Node* i, *m;
    int lim, cont = 0;
    
    if(index < 0)
        lim = tamanhoLista(n) - 1;
    else
        lim = index;

    for(i = n; cont < lim - 1; i = i->next) cont++;
    
    if(index == 0){
        
        if(n->next == NULL){
            free(n);
            n = NULL;
        }
        else{

            n->i = n->next->i;
            m = n->next;
            n->next = n->next->next;
            free(m);

        }
    }

    else{
        m = i->next;
        if(m->next == NULL)
            i->next = NULL;
        else i->next = m->next;
        free(m);
    }

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