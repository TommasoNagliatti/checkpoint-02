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

float CalcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

void ClassificarAluno(float media) {
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }
}

void sistema_media() {
    float n1, n2, n3, media;
    ler_nota(&n1);
    ler_nota(&n2);
    ler_nota(&n3);
    media = CalcularMedia(n1, n2, n3);
    printf("Media: %.2f\n", media);
    ClassificarAluno(media);
}

void menu() {
    printf("\n================== MENU ==================\n");
    printf("1 - Calcular media\n");
    printf("2 - Calcular presenca\n");
    printf("3 - Calcular derivada\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int main() {
    int opcao;
    do {
        menu();
        scanf("%d", &opcao);
        switch(opcao) {
            case 1:
                printf("========CALCULAR MEDIA========\n");
                sistema_media();
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