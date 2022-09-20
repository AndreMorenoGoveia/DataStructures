#include "fila.h"



fila* criaFila(int tamanho, bool expansivel){

    fila* f;
    f->elementos = (item*) malloc(tamanho*sizeof(item));
    f->inicio = -1;
    f->final = -1;
    f->expansivel = expansivel;
    f->tam = 0;
    f->tamMax = tamanho;

}



void entra(fila* f, item i){

    if(filaVazia(f)){

        f->inicio = 0;
        f->final = 0;
        f->elementos[0] = i;
        f->tam++;

    }
    else{

        if(f->tam < f->tamMax){

            f->inicio = (f->inicio + 1) % f->tamMax;
            f->elementos[f->inicio] = i;
            f->tam++;

        }
        else{ realoca(f); entra(f, i); }

    }

}



item sai(fila* f){

    if(!filaVazia(f)){

        item it;

        it = f->elementos[f->final];
        f->final = (f->final + 1) % f->tamMax;
        f->tam--;

        return it;

    }

}



bool filaVazia(fila* f){

    return f->tam == 0;

}



void imprimeFila(fila* f){


    if(filaVazia(f))
        printf("A fila esta vazia\n");

    else if(f->tam == 1)
        printf("Fila --> %d\n", f->elementos[f->final]);

    else{

        int i;

        printf("Fim --> ");

        for(i = f->final; i != f->inicio; i = (i + 1) % f->tamMax)
            printf("%d ", f->elementos[i]);
        

        printf("%d <-- Inicio\n", f->elementos[f->inicio]);

    }

}



void realoca(fila* f){

    if(!f->expansivel)
        printf("A fila esta lotada\n");

    else{

        int i;

        f->tamMax *= 2;
        item* novo = (item*) malloc(f->tamMax*sizeof(item));

        for(i = 0; i < f->tam; i++)
            novo[i] = f->elementos[(f->final + i) % f->tam];

        free(f->elementos);

        f->elementos = novo;

        f->inicio = f->tam - 1;
        f->final = 0;

    }

}



void destroiFila(fila* f){

    free(f->elementos);

}