#include "ListaHete.h"

int main(){
    struct figura *lista = 0;
    int x = 1;
    while(x){
        printf("Digite:\n1 para adicionar uma figura:\n2 para remover:\n3 para listar:\n4 para sair:\n-->");
        int esc;
        scanf("%d", &esc);
        switch (esc) {
          case 1:
              printf("Digite:\n1 para circulo:\n2 para triangulo:\n3 para quadrado:\n-->");
              int tipo;
              scanf("%d", &tipo);
              switch (tipo) {
                case 1:
                    ;int raio, p1, p2;
                    printf("Digite valor do raio: ");
                    scanf("%d", &raio);
                    printf("Digite as coordenadas: ");
                    scanf("%d %d", &p1, &p2);
                    lista = addCirc(lista, raio, p1, p2);
                break;
              }
          break;
          case 2:
          break;
          case 3:
              ListarFigures(lista);
          break;
          case 4:
              printf("Saindo...\n");
              x = 0;
          break;
        }
    }
}
