#include <stdlib.h>
#include <stdbool.h>


/* Item armazenado na árvore */
typedef int item;


/* Estrutura de um elemento da árvore */
typedef struct elemento {

    item valor;
    struct elemento* esquerda;
    struct elemento* direita;

} elemento;



/* Função que aloca dinamicamente a raíz de uma arvore */
elemento* criaRaiz(int valor);



/* Função que adiciona um item à árvore, de acordo com seu valor */
void adicionaElemento(elemento* raiz, item valor);



/* Função que determina se algum item está na árvore */
bool encontraItem(elemento* raiz; item valor);




/* Função que libera a memória alocada */
void destroiArvore(elemento* raiz);