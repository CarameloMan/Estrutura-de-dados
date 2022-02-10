#ifndef MODULOFILA_H_INCLUDED
#define MODULOFILA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct fila{
    struct caixa *ini;
    struct caixa *fim;
};

struct caixa{
    struct caixa *ant;
    int dado;
    struct caixa *prox;
};

void Add(struct fila *fila, int valor);

void Remover(struct fila *fila);

void Listar(struct fila fila);

void Limpar(struct fila *fila);

#endif
