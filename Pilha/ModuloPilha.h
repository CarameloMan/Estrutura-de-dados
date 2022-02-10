#ifndef MODULOPILHA_H_INCLUDED
#define MODULOPILHA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct pilha{
    struct caixa *topo;
};

struct caixa {
    struct caixa *ant;
    float dado;
    struct caixa *prox;
};

void Push(struct pilha *pilha, float valor);

float Pop(struct pilha *pilha);

#endif
