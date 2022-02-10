#include "ModuloPilha.h"
#include <string.h>

int main(){
    float v1, v2, res, num;
    char ope[5];
    int x = 0;

    struct pilha pilha;
    pilha.topo = 0;

    printf("Calculadora Pos Fixada!!!\n");
    scanf("%[^\t\n]s", ope);
    while (strcmp(ope, ".") != 0){
        if (strcmp(ope,"+") != 0 && strcmp(ope,"-") != 0 && strcmp(ope,"*") != 0 && strcmp(ope,"/") != 0){
            num = atof(ope);
            setbuf(stdin, NULL);
            Push(&pilha, num);
        }
        else{
            v2 = Pop(&pilha);
            v1 = Pop(&pilha);
            if (strcmp(ope,"+") == 0) {
                  res = v1+v2;
            }
            if (strcmp(ope,"-") == 0) {
                  res = v1-v2;
            }
            if (strcmp(ope,"*") == 0) {
                  res = v1*v2;
            }
            if (strcmp(ope,"/") == 0) {
                  res = v1/v2;
            }
            Push(&pilha, res);
            setbuf(stdin, NULL);
        }
        scanf("%[^\t\n]s", ope);
    }
    printf("%.2f\n", Pop(&pilha));
}
