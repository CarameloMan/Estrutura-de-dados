#include "Arvore.h"

struct Arvore *AddOrd(int valor, struct Arvore *esq, struct Arvore *dir){
    struct Arvore *aux = 0; //auxiliar
    if (esq == 0){ // verificado se tem algo a esquerda
        aux = dir;
    }
    else{
        aux = esq;
    }
    if (aux){
        if (aux->dado > valor){ //verificando em qual lado deve ser feita a inclusao
            aux->SAE = AddOrd(valor, aux->SAE, 0); //recursividade
        }
        else{
            aux->SAD = AddOrd(valor, 0, aux->SAD); //recursividade
        }
        return aux;
    }
    else{
        struct Arvore *novo = 0;
        novo = (struct Arvore *)malloc(sizeof(struct Arvore)); //alocando  espaço para nova "folha"
        if (novo == 0); //verificando se houve erro!
        else{
            novo->dado = valor; //preenxendo nova "folha"
            novo->SAE = 0;
            novo->SAD = 0;
        }
        return novo;
    }
}

void ExibPreFix(struct Arvore *arvore){
    if (arvore == 0); //verificado se há elementos
    else{
        struct Arvore *aux = arvore; //auxiliar
        printf("%d\n", aux->dado);
        if (aux->SAE){  //verificando se há elemenntos a esquerda
            ExibPreFix(aux->SAE); //recursividade
        }
        if(aux->SAD){  //verificado  se há  elementos a direira
            ExibPreFix(aux->SAD); //recursividade
        }
    }
}

void ExibInFix(struct Arvore *arvore){
    if (arvore == 0); //verificando se existe arvore
    else{
        struct Arvore *aux = arvore;  // auxiliar
        if (aux->SAE){ //verificando  se há elementos a esquerda
            ExibInFix(aux->SAE);  //recursividade
        }
        printf("%d\n", aux->dado);
        if(aux->SAD){ //verificando se há elementos a direita
            ExibInFix(aux->SAD);  //recursividade
        }
    }
}

void ExibPosFix(struct Arvore *arvore){
    if (arvore == 0); //verificando se existe arvore
    else{
        struct Arvore *aux = arvore; //auxiliar
        if (aux->SAE){ //verificando se há elementos a esquerda
            ExibPosFix(aux->SAE); //recursividade
        }
        if(aux->SAD){  //verificando se há elementos a direita
            ExibPosFix(aux->SAD); //recursividade
        }
        printf("%d\n", aux->dado);
    }
}

void Destruction(struct Arvore *arvore){
    if (arvore == 0);  //verificando se há arvore
    else{
        struct Arvore *aux = arvore; //auxiliar
        if (aux->SAE){ //verificando se há elementos a esquerda
            Destruction(aux->SAE); //recursividade
        }
        if(aux->SAD){ //verificando se há  elementos a direita
            Destruction(aux->SAD); //recursividade
        }
        free(aux);
    }
}

struct Arvore *RemoveFolha(int valor, struct Arvore *arvore){  // Função para remover  elemento
    if (!arvore);  //Verificando se existe uma arvore
    else{
        struct Arvore *aux = arvore; //auxiliar
        if (aux->dado == valor){ //verificando se é o elemento a remover
            if (aux->SAD){ //Verificando se existe uma sub-arvore a direita
                struct Arvore *auxD = aux->SAD; //auxiliar para percorrer SAD
                struct Arvore *auxD2 = aux->SAD; //auxiliar para marcar inicio da SAD
                while (auxD->SAE){  //Percorrendo
                    auxD = auxD->SAE;
                }
                auxD->SAE = aux->SAE; //Passando sub-arvore esquerda para o ultimo elemento da Sub-arvore a direita
                free (aux);  //liberando elemento
                return auxD2;  //Retornando sub-arvore direita concatenada com esquerda
            }
            else if(aux->SAE){ //verificando se existe Sub-Arvore a esquerda caso não tenha  SAD
                struct Arvore *auxE = aux->SAE;  //auxiliar para armazenar SAE dos elementos
                free(aux);  //liberando elemento
                return auxE;  //retornando sub arvore restante
            }
            else{  //caso não aja sub-arvore a esquerda ou direita
                free(aux); //liberando  elemento
                return 0;
            }
        }
        else{
            if (aux->SAE){
                aux->SAE = RemoveFolha(valor, aux->SAE); //recursividade
            }
            if (aux->SAD){
                aux->SAD = RemoveFolha(valor, aux->SAD); //recursividade
            }
            return aux;
        }
    }
}

int contagem(struct Arvore  *arvore, int x, int y){
    if(!arvore);
    else{
        if(arvore->SAE){
            x++;
            x+=contagem(arvore->SAE,x,y);
        }
        if(arvore->SAD){
            y++;
            y+=contagem(arvore->SAD,x,y);
        }
        if(!arvore->SAE && !arvore->SAD){
            return 1;
        }
        else{
            if(x>y){
                return x;
            }
            else{
                return y;
            }
        }
    }
}