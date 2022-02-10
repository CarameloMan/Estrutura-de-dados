#include "ModuloEncD.h"

int main(){
    int x = 1;
    struct caixa *lista = 0;
    while (x){
        printf("Adicionar 1:\nListar 2:\nInverter 3:\n");
        int esc;
        scanf("%d", &esc);
        if (esc == 1){
            printf("Digite o valor\n");
            int valor;
            scanf("%d", &valor);
            lista = AddFim(lista, valor);
        }
        else if(esc == 2){
            listar(lista);
        }
        else if(esc == 3){
            lista = Inverte(lista);
        }
        else{
            x = 0;
        }
    }
}
