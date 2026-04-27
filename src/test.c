#include <stdio.h>

int main (){
int opcao;
float CalcularMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3) / 3;
}
float ClassificarAluno(float media){
    if(media >= 7){
        printf("Aprovado\n")
    }
    else if(media <= 7 and >= 5){
        printf("Recuperacao\n")
    }
    else{
        printf("Recuperacao\n")
    }
}
return 0;
}