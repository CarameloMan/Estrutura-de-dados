#include <stdio.h>
#include <stdlib.h>

struct Arvore{ //tipo para elementos ("folhas") da estrutura arvore
    int dado;
    struct Arvore *SAE, *SAD;
};

struct Arvore *AddOrd(int valor, struct Arvore *esq, struct Arvore *dir);  //funcão para adicionar elementos ordenadamente

void ExibPreFix(struct Arvore *arvore); //função para exibir na forma pré fixada (Raiz,SAE,SAD)

void ExibInFix(struct Arvore *arvore); //Função para exibir na forma ordenada, infixada (SAE,Raiz,SAD)

void ExibPosFix(struct Arvore *arvore); //Função para exibir na forma pós fixada (SAE,SAD,Raiz)

void Destruction(struct Arvore *arvore); //Função para limpar arvore

struct Arvore *RemoveFolha(int valor, struct Arvore *arvore); //Função para remover elemento