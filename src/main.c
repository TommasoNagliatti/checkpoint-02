#include <stdio.h>

void ler_nota(float *nota) {
    do {
        printf("Digite uma nota (0 a 10): ");
        scanf("%f", nota);

        if (*nota < 0 || *nota > 10) {
            printf("Valor invalido! Tente novamente.\n");
        }

    } while (*nota < 0 || *nota > 10);
}

void menu(){
    printf("\n================== MENU ==================\n");
    printf("1 - Calcular media\n");
    printf("2 - Calcular presenca\n");
    printf("3 - Calcular derivada\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int main() {
    int opcao;
    float nota1, nota2, media;

    do {
        menu();
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                ler_nota(&nota1);
                ler_nota(&nota2);

                media = (nota1 + nota2) / 2;

                printf("Media: %.2f\n", media);

                if (media >= 6) {
                    printf("Aluno aprovado\n");
                } else {
                    printf("Aluno reprovado\n");
                }
                break;

            case 2:
                printf("Funcao de presenca ainda nao implementada.\n");
                break;

            case 3:
                printf("Funcao de derivada ainda nao implementada.\n");
                break;

            case 0:
                printf("Saindo...\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while(opcao != 0);

    return 0;
}