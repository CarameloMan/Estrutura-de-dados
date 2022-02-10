#include "ModuloPilha.h"

void Push(struct pilha *pilha, float valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa)); //* alocando memoria
    if (novo == 0){ //*verificando se a alocação deu errado
        printf("Erro de alocacao\n");
    }
    novo->ant = 0;
    novo->dado = valor; //* preenxendo com os dados
    novo->prox = 0;
    if (pilha->topo == 0){ //* verificando se é a primeira atribuição
        pilha->topo = novo;
    }else{ //* caso não seja a primeira
        novo->ant = pilha->topo;
        pilha->topo = novo;
    }
}

float Pop(struct pilha *pilha){
    if(pilha->topo != 0){ //*verificaão para saber se tem algo na pilha
        struct caixa *aux = pilha->topo; //*auxiliar
        pilha->topo = pilha->topo->ant; //* "desatribuição"
        float val = aux->dado;
        free(aux); //* liberação da memoria
        return val;
    }
}
