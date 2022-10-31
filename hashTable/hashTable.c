#include "hashTable.h"



tabela* cria(int tamanho){

    tabela* t = (tabela*) malloc(sizeof(tabela));
    t->tam = 0;
    t->tamMax = tamanho;
    t->elementos = (lista**) malloc(tamanho*sizeof(lista*));

    while(tamanho--)
        t->elementos[tamanho] = NULL;

}



int hash(tabela* t, item x){

    return x % t->tamMax;

}



void insere(tabela* t, item x){

    lista* l = t->elementos[hash(t, x)];

    while(l != NULL && l->valor != x)
        l = l->next;

    if(l == NULL){

        l = (lista*) malloc(sizeof(lista));
        l->next = NULL;
        l->valor = x;

    }

}



void remove(tabela* t, item x){

    lista* l = t->elementos[hash(t, x)];

    if(l != NULL){

        if(l->valor != x){

            while(l->next != NULL && l->next->valor != x)
                l = l->next;

            if(l->next != NULL){

                lista* m = l->next;
                l->next = l->next->next;
                free(m);
                t->tam--;

            }


        }
        else{

            lista* m = l;
            l = l->next;
            free(m);
            t->tam--;

        }

    }



}



bool busca(tabela* t, item x){

    lista* l;

    while(l != NULL && l->valor != x)
        l = l->next;

    return l != NULL;

}



void print_tab(tabela* t){

    int i;
    lista* l;

    for(i = 0; i < t->tamMax; i++){

        if(t->elementos[i] != NULL){

            printf("Elemento [%d]: ", i);
            l = t->elementos[i];

            while(l != NULL)
                printf("%d ", l->valor);

            printf("\n");

        }

    }

}



void destroiTab(tabela* t){

    lista* l;

    while(t->tamMax--){

        l = t->elementos[t->tamMax];

        while(l != NULL){

            l = l->next;
            free(l);

        }

    }

    free(t->elementos);

}