#include "arvoreBuscaBinaria.h"



elemento* criaRaiz(int valor){

    elemento* root = (elemento*) malloc(sizeof(elemento));

    root->valor = valor;
    
    root->esquerda = NULL;
    root->direita = NULL;

    return root;

}



void adicionaElemento(elemento* raiz, item valor){

    bool b = true;
    elemento* node = raiz;

    while(b){

        if(valor < node->valor){

            node = node->esquerda;

            if(node == NULL){

                node = (elemento*) malloc(sizeof(elemento));

                node->valor = valor;

                node->direita = NULL;

                node->esquerda = NULL;

                b = false;

            }

        }
        else{

            node = node->direita;

            if(node == NULL){

                node = (elemento*) malloc(sizeof(elemento));

                node->valor = valor;

                node->direita = NULL;

                node->esquerda = NULL;

                b = false;

            }

        }

    }

}



bool encontraItem(elemento* raiz, item valor){

    elemento* node = raiz;
    bool b = true;

    while (b){

        if(node->valor < valor){

            if(node->esquerda == NULL) b = false;
            else node = node->esquerda;

        }
        else if(node->valor == valor) return true;
        else{

            if(node->esquerda == NULL) b = false;
            else node = node->esquerda;

        }

    }

    return b;

}



void destroiArvore(elemento* raiz){

    if(raiz->direita != NULL)
        destroiArvore(raiz->direita);

    if(raiz->esquerda != NULL)
        destroiArvore(raiz->esquerda);

    free(raiz);

}


