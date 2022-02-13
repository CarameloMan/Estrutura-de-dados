#include "ModuloVetor.h"

int addF (int *vetor, int cv, int valor){

    vetor[cv] = valor;
    cv = cv + 1;
    return cv;
}

int addI (int *vetor, int cv, int valor){

    int aux = vetor[0], aux2;
    vetor[0] = valor;
    for (int i = 1; i <= cv; i++){
        aux2 = aux;
        aux = vetor[i];
        vetor[i] = aux2;
    }
    cv++;
    return cv;
}

void listar (int *vetor, int cv){

    if (cv == 0){
        printf("Tá vazia\n");
    }else{
        for (int i = 0; i < cv; i++){
            printf("%d - ", vetor[i]);
        }
        printf("FIM\n");
    }
}

int limpar (){

    return 0;
}

int removerF (int cv){

    cv = cv-1;
    return cv;
}

int removerI (int *vetor, int cv){

    for (int i = 0; i < cv; i++){
        vetor[i] = vetor[i+1];
    }
    cv = cv-1;
    return cv;
}
