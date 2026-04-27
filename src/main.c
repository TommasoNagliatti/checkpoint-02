#include <stdio.h>

void ler_nota(float *nota);
float CalcularMedia(float n1, float n2, float n3);
void ClassificarAluno(float media);
void sistema_media();
void menu();
void calcularPresenca();
void calcularDerivada();

void sistema_media(){
    float n1, n2, n3, media;

    ler_nota(&n1);
    ler_nota(&n2);
    ler_nota(&n3);

    media = CalcularMedia(n1, n2, n3);
    printf("Media: %.2f\n", media);

    ClassificarAluno(media);
}

float CalcularMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}

void ClassificarAluno(float media){
    if(media >= 7){
        printf("Aprovado\n");
    }
    else if(media >= 5){
        printf("Recuperacao\n");
    }
    else{
        printf("Reprovado\n");
    }
}

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

void calcularPresenca(){
    int presenca;
        printf("digite sua presenca (0 - 100): ");
        scanf("%d", &presenca);

        if (presenca >= 75 && presenca < 101){
            printf("Aluno aprovado!");
        }
        else if (presenca < 75 && presenca >= 0){
            printf("Aluno reprovado!");
        }
        else {
            printf("presenca invalida!");
        }
            
}

void calcularDerivada (){
    float a, b, c;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);


    printf("\nDerivada: f'(x) = %.0fx + %.0f\n", 2 * a, b);
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
                printf("========CALCULAR PRESENCA========\n");
                calcularPresenca();
                break;

            case 3:
                printf("========CALCULAR DERIVADA========\n");
                calcularDerivada ();
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