#include "ModuloEncD.h"

struct caixa *AddFim(struct caixa *lista, int valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa));
    if (novo == 0){
        return 0;
    }
    novo->ant = 0;
    novo->dado = valor;
    novo->prox = 0;
    if (lista == 0){
        lista = novo;
        return lista;
    }
    struct caixa *aux = lista;
    while (aux->prox != 0){
        aux = aux->prox;
    }
    aux->prox = novo;
    novo->ant = aux;
    return lista;
}

void listar(struct caixa *lista){
    struct caixa *aux = lista;
    while (aux != 0){
        printf("Conteudo da lista: %d\n", aux->dado);
        aux = aux->prox;
    }
}

struct caixa *Inverte(struct caixa *lista){
    if (lista->prox == 0 || lista == 0){
        return lista;
    }
    struct caixa *aux = lista, *aux2, *aux3 = lista;
    aux2 = aux->prox;
    while (aux3->prox != 0){
        aux3 = aux3->prox;
    }
    do{
        aux->prox = aux->ant;
        if (aux2 != 0){
            aux->ant = aux2;
            aux = aux2;
            aux2 = aux2->prox;
        }else{
            aux->ant = 0;
        }
    }while(aux->ant != 0);
    lista = aux3;
    return lista;

}
