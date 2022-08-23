#include "pilha.h"


pilha* criaPilha(int tamanho, bool expansivel){

    pilha* p = malloc(sizeof(pilha));

    p->v = malloc(tamanho*sizeof(item));

    p->tam = 0;

    p->tamMax = tamanho;

    p->expansivel = expansivel;

}



bool empilha(pilha* p, item i){

    if(p->tam < p->tamMax){

        p->v[p->tam] = i;
        p->tam++;

        return true;
    }

    else if(p->expansivel){

        p->v = realloc(p->v, p->tamMax*2*sizeof(item));
        p->tamMax *= 2;
        return empilha(p, i);

    }

    return false;

}



item desempilha(pilha* p){

    if(!pilhaVazia(p)){
        p->tam--;
        return p->v[p->tam];
    }

}





item topoPilha(pilha* p){

    return p->v[p->tam - 1];

}



bool pilhaVazia(pilha* p){

    return p->tam == 0;

}



void printPilha(pilha* p){

    int i;

    printf("\n");

    if(!pilhaVazia(p)){

        if(p->tam > 1){

            printf("Topo -->    %d\n", p->v[p->tam - 1]);

            for(i = p->tam - 2; i > 0; i--)
                printf("            %d\n", p->v[i]);

            printf("Base -->    %d\n", p->v[0]);

        }

        else
            printf("Pilha -->   %d\n", p->v[0]);

    }

    else
        printf("A pilha esta vazia\n");

}



void destroiPilha(pilha* p){

    free(p->v);
    free(p);

}