#include "Arvore.h"

int main(){
    int esc = 1;
    struct Arvore *arvore = 0;
    while (esc){
        printf("Menu da Floresta!!!!\n1-Adcionar Folha:\n2-Exibir PreFix:\n3-Exibir InFix:\n4-Exibir PosFix:\n5-Remover folha:\n6-Queimar a floresta:\n7-Sair:\n--> ");
        scanf("%d", &esc);
        switch (esc){
            case 1:
                printf("Qual o valor?\n-->");
                int valorAdd;
                scanf("%d", &valorAdd);
                arvore = AddOrd(valorAdd, arvore, 0);
                break;
            case 2:
                system("clear");
                ExibPreFix(arvore);
                break;
            case 3:
                system("clear");
                ExibInFix(arvore);
                break;
            case 4:
                system("clear");
                ExibPosFix(arvore);
                break;
            case 5:
                printf("Qual valor a remover?\n-->");
                int valorRem;
                scanf("%d", &valorRem);
                arvore = RemoveFolha(valorRem, arvore);
                break;
            case 6:
                system("clear");
                printf("Queimando floresta...\n");
                Destruction(arvore);
                arvore = 0;
                break;
            case 7:
                printf("Saindo...\n");
                Destruction(arvore);
                esc = 0;
                break;
        }
    }
}