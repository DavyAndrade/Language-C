#include <stdio.h>

/*
Escreva um algoritmo para calcular o salário
semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas
trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a
pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.
*/

int main(void) {
    int HT;
    float VH;
    float salario;

    printf("Informe as horas trabalhadas: ");
    scanf("%d", &HT);
    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &VH);

    if (HT <= 40) {
        salario = HT*VH;
    }
    else {
        salario = (40*VH)+((HT-40)*1.5*VH);
    }
    printf("O seu salario eh de: %f", salario);
}