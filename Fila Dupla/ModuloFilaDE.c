#include "ModuloFilaDE.h"

void Add(struct fila *fila, int valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa)); //* alocando memoria
    if (novo == 0){ //* verificando se a alocação funcionou
        printf("Erro de alocacao\n");
    }
    novo->ant = 0;              //
    novo->dado = valor;         //* preenxendo o novo elemento
    novo->prox = 0;             //
    if (fila->ini == 0){ //* Verificando se essa é a primeira atribuição
        fila->ini = novo;
        fila->fim = novo;
    }else{                //* Caso não seja a primeira atribuição
        fila->fim->prox = novo;
        novo->ant = fila->fim;
        fila->fim = novo;
    }
}

void Remover(struct fila *fila){
    if(fila->ini != 0){ //*verificaão para saber se tem algo na fila
        struct caixa *aux = fila->ini; //*auxiliar
        fila->ini = fila->ini->prox; //* "desatribuição"
        free(aux); //* liberação da memoria
        if (fila->ini == 0){ //* verificando se a fila ficou vazia
            fila->fim = 0; //* caso fila vazia, atualizando "fim" da fila
        }
    }
}

void Listar(struct fila fila){
    struct caixa *lista = fila.ini;
    if (lista == 0); //*verificando se a lista já esta vazia
    else{
        struct caixa *aux = lista; //*auxiliar
        while (aux != 0){ //* percorrendo e exibindo conteudo
            printf("Conteudo da fila: %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

void Limpar(struct fila *fila){
    while (fila->ini != 0){ //* condição de parada: fila vazia(inicio da fila == 0)
        Remover(fila);//* remoção de elementos
    }
}
