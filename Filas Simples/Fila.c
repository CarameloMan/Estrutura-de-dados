#include <stdio.h>
#include "moduloFila.h"

int main(){
    struct fila fila;
    fila.ini = 0;
    fila.fim = 0;

    int w = 1;
    while (w){
        int esc;
        printf("1 - add \n2 - remover \n3 - listar \n4 - Sair\n");
        scanf("%d", &esc);
        switch(esc){
            case 1:
                printf("Diga algo seu retardado\n");
                int x;
                scanf("%d", &x);
                Add(&fila, x);
                break;
            case 2:
                Remover(&fila);
                break;
            case 3:
                Listar(fila);
                break;
            case 4:
                w = 0;
                break;
        }
    }
}
