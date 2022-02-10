#ifndef MODULOLISTA_H_INCLUDED
#define MODULOLISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct caixa{ //* tipo para alocaçao
    int dado;
    struct caixa *prox;
};

struct fila{
    struct caixa *ini;
    struct caixa *fim;
};

void Remover(struct fila *fila);

void Add(struct fila *fila, int valor);

void Listar(struct fila fila);

#endif
