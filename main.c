#include <stdio.h>
#include <math.h> // !Necessária para raiz (sqrt) e quadrado (pow)!
#include "Bhaskara.h"

int main() {
    int opcao;
    double num1, num2, resultado;

    printf("--- CALCULADORA AVANCADA ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Elevar ao Quadrado\n");
    printf("7 - Bháskara\n");
    printf("Escolha a operacao desejada: ");
    scanf("%d", &opcao);


    switch(opcao) {

			// Soma

        case 1: 
            printf("\n[Soma] Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("[Soma] Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 + num2;
            printf(">>> Resultado da soma: %.2lf\n", resultado);
            break;

			// Subtração

        case 2: 
            printf("\n[Subtracao] Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("[Subtracao] Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 - num2;
            printf(">>> Resultado da subtracao: %.2lf\n", resultado);
            break;

			// Multiplicação

        case 3: 
            printf("\n[Multiplicacao] Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("[Multiplicacao] Digite o segundo numero: ");
            scanf("%lf", &num2);
            resultado = num1 * num2;
            printf(">>> Resultado da multiplicacao: %.2lf\n", resultado);
            break;

 			// Divisão

        case 4:
            printf("\n[Divisao] Digite o dividendo (numero de cima): ");
            scanf("%lf", &num1);
            printf("[Divisao] Digite o divisor (numero de baixo): ");
            scanf("%lf", &num2);
            
            // Seguranca contra divisao por zero
            if (num2 == 0) {
                printf(">>> Erro: Nao eh possivel dividir por zero!\n");
            } else {
                resultado = num1 / num2;
                printf(">>> Resultado da divisao: %.2lf\n", resultado);
            }
            break;

			// Raiz Quadrada

        case 5:
            printf("\n[Raiz] Digite o numero para extrair a raiz: ");
            scanf("%lf", &num1);
            
            // Seguranca contra numeros negativos
            if (num1 < 0) {
                printf(">>> Erro: Nao existe raiz quadrada de numero negativo nos reais.\n");
            } else {
                resultado = sqrt(num1);
                printf(">>> A raiz quadrada de %.2lf eh %.2lf\n", num1, resultado);
            }
            break;

			// Ao Quadrado

        case 6:
            printf("\n[Quadrado] Digite o numero que deseja elevar: ");
            scanf("%lf", &num1);
            resultado = pow(num1, 2);
            printf(">>> %.2lf elevado ao quadrado eh %.2lf\n", num1, resultado);
            break;

			//Bháskara

	case 7:
   	    executarBhaskara();
            break;

			// Números Inválidos

        default:
            printf("\n>>> Opcao invalida! Reinicie o programa.\n");
            break;
    }

    return 0;
}
