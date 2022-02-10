#include <stdio.h>
#include <stdlib.h>

struct caixa {
    struct caixa *ant;
    int dado;
    struct caixa *prox;
};

struct caixa *AddFim(struct caixa *lista, int valor);

struct caixa *Inverte(struct caixa *lista);

void listar(struct caixa *lista);
