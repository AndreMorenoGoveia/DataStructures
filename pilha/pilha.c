#include "pilha.h"


pilha* criaPilha(int tamanho, bool expansivel){

    pilha* p = malloc(sizeof(pilha));

    p->v = malloc(tamanho*sizeof(item));

    p->tam = 0;

    p->tamMax = tamanho;

    p->expansivel = expansivel;

}



bool empilha(pilha* p, item i);



item desempilha(pilha* p);



item topoPilha(pilha* p);



void printPilha(pilha* p);



void destroiPilha(pilha* p);