#include "moduloFila.h"

void Add(struct fila *fila, int valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa)); //*alocando memoria
    if (novo == 0){ //*verificando se a alocação deu errado
        printf("Erro de alocacao\n");
    }
    novo->dado = valor; //*preenxendo com os dados
    novo->prox = 0;
    if(fila->ini == 0){ //* verificando se é a primeira atribuição
        fila->ini = novo;
        fila->fim = novo;
    }else{
        fila->fim->prox = novo;
        fila->fim = novo;
    }
}

void Remover(struct fila *fila){
    if(fila->ini != 0){ //*verificaão para saber se tem algo na lista
        struct caixa *aux = fila->ini; //*auxiliar
        fila->ini = fila->ini->prox; //* "desatribuição"
        free(aux); //* liberação da memoria
        if (fila->ini == 0){
            fila->fim = 0;
        }
    }
}

void Listar(struct fila fila){
    struct caixa *lista = fila.ini;
    if (lista == 0); //*verificando se a lista já esta vazia
    else{
        struct caixa *aux = lista; //*auxiliar
        while (aux != 0){ //* percorrendo e exibindo conteudo
            printf("Conteudo da lista: %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}
