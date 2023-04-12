#include<stdio.h>
int main(){
    float nota1,nota2,freq;
    nota1 = 0.0;
    nota2 = 0.0;
    freq = 0.0;

    printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &freq);

    if(((nota1+nota2)/2 >= 6.0) && (freq >= 0.75)){
        printf("aluno passou");
    }
    else{
        printf("reprovou");
    }

    return 0;
}
