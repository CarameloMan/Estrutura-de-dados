#ifndef MODULOLISTA_H_INCLUDED
#define MODULOLISTA_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

struct caixa{ //* tipo para alocaçao
    int dado;
    struct caixa *prox;
};

//* função para adicionar elemento no final da lista
struct caixa *AddFim(struct caixa *lista, int valor);

//* Função para adicionar elemento no inicio da lista
struct caixa *AddIni(struct caixa *lista, int valor);

//* Função para remover elemento do inicio da lista
struct caixa *RemoverIni(struct caixa *lista);

//* Funçãoo para remover elemento do final da Lista
struct caixa *RemoverFim(struct caixa *lista);

//* Função para listar elementos
void Listar(struct caixa *lista);

//* Função para esvaziar lista
struct caixa *Limpar(struct caixa *lista);

//* função para verificar se a lista esta vazia
void Vazia(struct caixa *lista);

#endif
