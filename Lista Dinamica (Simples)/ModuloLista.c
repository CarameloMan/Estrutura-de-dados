#include "ModuloLista.h"

void Vazia(struct caixa *lista){
    if(lista == 0){
        printf("Lista vazia\n");
    }
    else{
        printf("Tem algo\n");
    }
}

struct caixa *AddFim(struct caixa *lista, int valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa)); //*alocando memoria
    if (novo == 0){ //*verificando se a alocação deu errado
        printf("Erro de alocacao\n");
        return lista;
    }
    novo->dado = valor; //*preenxendo com os dados
    novo->prox = 0;
    if(lista == 0){ //* verificando se é a primeira atribuição
        return novo;
    }else{
        struct caixa *aux = lista; //*auxiliar
        while(aux->prox != 0){ //* percorrendo a lista
            aux = lista->prox;
        }
        aux->prox = novo; //* atribuindo
        return lista;
    }
}

struct caixa *AddIni(struct caixa *lista, int valor){
    struct caixa *novo = 0;
    novo = (struct caixa*)malloc(sizeof(struct caixa)); //* alocando memoria
    if (novo == 0){ //*verificando se a alocação deu errado
        printf("Erro de alocacao\n");
        return lista;
    }
    novo->dado = valor; //* preenxendo com os dados
    if (lista == 0){ //* verificando se é a primeira atribuição
        novo->prox = 0;
    }else{ //* caso não seja a primeira
        novo->prox = lista;
    }
    lista = novo; //* atribuindo
    return lista;
}

void Listar(struct caixa *lista){
    if (lista == 0); //*verificando se a lista já esta vazia
    else{
        struct caixa *aux = lista; //*auxiliar
        while (aux != 0){ //* percorrendo e exibindo conteudo
            printf("Conteudo da lista: %d\n", aux->dado);
            aux = aux->prox;
        }
    }
}

struct caixa *RemoverIni(struct caixa *lista){
    if(lista != 0){ //*verificaão para saber se tem algo na lista
        struct caixa *aux = lista; //*auxiliar
        lista = lista->prox; //* "desatribuição"
        free(aux); //* liberação da memoria
    }
    return lista;
}

struct caixa *RemoverFim(struct caixa *lista){
    struct caixa *aux = lista, *ant; //* auxiliares
    while (aux->prox != 0){ //*percorrendo a lista
        ant = aux;
        aux=aux->prox;
    }
    if (aux == lista){ //*verificando se só existe um elemento
        lista = 0; //* "desatribuição"
        free(aux); //*liberação da memoria
        return lista;
    }
    else{
        ant->prox = 0; //* "desatribuição"
        free(aux); //* liberação da memoria
        return lista;
    }
}

struct caixa *Limpar(struct caixa *lista){
    while (lista != 0){ //* condição de parada: lista vazia(lista == 0)
        lista = RemoverIni(lista);//* remoção de elementos
    }
    return lista;
}
