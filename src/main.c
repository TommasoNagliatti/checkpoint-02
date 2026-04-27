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

int main() {
    float nota1, nota2, media;

    printf("==================MENU==================\n");
    printf("========Qual opcao voce deseja?=========\n");
    printf("Calcular media (1)\n");
    printf("Calcular presenca (2)\n");
    printf("Calcular derivada (0)\n");

    ler_nota(&nota1);
    ler_nota(&nota2);

    media = (nota1 + nota2) / 2;
    printf("Media: %.2f\n", media);

    if (media >= 6) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}