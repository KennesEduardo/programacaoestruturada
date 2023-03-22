// Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê: 

#include<stdio.h>
void main (){

    float resul, salario, horas, irpf, sindicato, inss, salarioLiquido, descontos;

    printf("Digite o valor que vc ganha por horas em R$: \n ");
    scanf("%f", &salario);

    printf("Digite o numero de horas que vc trabalha: \n ");
    scanf("%f", &horas);

    salario = salario * horas;
    printf("O salario bruto e = %.2f reais \n ", salario);

    irpf = salario * 0.11;
    printf("O valor do descontado de IRPF = %.2f \n ", irpf);

    sindicato = salario * 0.05;
    printf("O valor do descontado de sindicato = %.2f \n ", sindicato);
    
    inss = salario * 0.08;
    printf("O valor do descontado de INSS = %.2f \n ", inss);

    descontos = irpf + inss + sindicato;
    salarioLiquido = salario - descontos ;
    printf("O valor valor liquido a receber = %.2f \n ", salarioLiquido);




    return 0;
}
