#include <stdio.h>
#include <stdlib.h>

struct figura{
    int tipo;
    void *f;
    struct figura *prox;
};

struct ponto{
    int x, y;
};

struct circulo{
    int raio;
    struct ponto p;
};

struct triangulo{
    struct ponto p[3];
};

struct quadrado{
    struct ponto p[4];
};

struct figura *addCirc(struct figura *lista, int raio, int p1, int p2);

void ListarFigures(struct figura *lista);
