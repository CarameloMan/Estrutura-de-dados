#include "ModuloPilha.h"

int main(){
    struct pilha pilha;
    pilha.topo = 0;

    printf("Digite um valor\n");
    float x, y;
    scanf("%f", &x);
    Push(&pilha, x);
    y = Pop(&pilha);
    printf("%f\n", y);
}
