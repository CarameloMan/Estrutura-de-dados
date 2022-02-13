#include <stdio.h>
#include <stdlib.h>
#include "ModuloVetor.h"

int main(){
    int vetor[50], cv=0, val;
    printf("digite valor\n");
    scanf("%d", &val);
    cv = addF(vetor, cv, val);
    printf("digite valor\n");
    scanf("%d", &val);
    cv = addI(vetor, cv, val);
    listar(vetor, cv);
    cv = removerI(vetor, cv);
    listar(vetor, cv);
}
