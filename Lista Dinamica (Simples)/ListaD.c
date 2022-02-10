#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ModuloLista.h"

int main(){
    int x = 1, valor;
    struct caixa *lista = 0;
      while(x != 6){
      printf("1 - Verificar se tem algo na lista:\n2 - Adicionar elemento:\n3 - Listar valores da lista:\n4 - Remover elemento:\n5 - Limpar lista:\n6 - Sair:\n");
      scanf("%d", &x);
      switch (x) {
        case 1:
            system("clear");
            Vazia(lista);
            break;
        case 2:
            system("clear");
            printf("1 - Adicionar no inicio:\n2 - Adicionar no fim:\n");
            int esc;
            scanf("%d", &esc);
            printf("Qual o valor a colocar?\n");
            scanf("%d", &valor);
            if (esc == 1){
                lista = AddIni(lista, valor);
            }else if(esc == 2){
                lista = AddFim(lista, valor);
            }
            break;
        case 3:
            system("clear");
            Listar(lista);
            break;
        case 4:
            system("clear");
            printf("1 - Remover do inicio:\n2 - Remover do fim\n");
            int esc2;
            scanf("%d", &esc2);
            if (esc2 == 1){
                lista = RemoverIni(lista);
            }else if(esc2 == 2){
                lista = RemoverFim(lista);
            }
            break;
        case 5:
            system("clear");
            lista = Limpar(lista);
            break;
        case 6:
            lista = Limpar(lista);
            break;
        }
    }
}
