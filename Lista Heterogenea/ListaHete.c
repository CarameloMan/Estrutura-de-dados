#include "ListaHete.h"

struct figura *addCirc(struct figura *lista, int raio, int p1, int p2){
    struct figura *novo;
    novo = (struct figura *)malloc(sizeof(struct figura));
    if (novo == 0){
        printf("Erro!\n");
        return lista;
    }
    struct circulo *circ;
    circ = (struct circulo *)malloc(sizeof(struct circulo));
    if (circ == 0){
        printf("Erro!\n");
        return lista;
    }
    circ->raio = raio;
    circ->p.x = p1;
    circ->p.y = p2;
    novo->tipo = 1;
    novo->f = circ;
    if (lista == 0){
        novo->prox = 0;
    }
    else {
        novo->prox = lista;
    }
    lista = novo;
    return lista;
}

void ListarFigures(struct figura *lista){
    if (lista == 0){
        printf("Sem figuras!\n");
    }
    else {
        struct figura *aux = lista;
        while (aux != 0){
            int fig = aux->tipo;
            switch (fig) {
              case 1:
                ;struct circulo *Caux = aux->f;
                printf("Raio: %d\n", Caux->raio);
                printf("Centro: x = %d, y = %d\n", Caux->p.x, Caux->p.y);
              break;
              case 2:
                ;struct triangulo *Taux = aux->f;
                for (int i = 0; i < 3; i++){
                    printf("Ponto %d: x = %d, y = %d\n", i+1, Taux->p[i].x, Taux->p[i].y);
                }
              break;
              case 3:
                ;struct quadrado *Qaux = aux->f;
                for (int i = 0; i < 4; i++){
                    printf("Ponto %d: x = %d, y = %d\n", i+1, Qaux->p[i].x, Taux->p[i].y);
                }
              break;
            }
            aux = aux->prox;
        }
    }
}
