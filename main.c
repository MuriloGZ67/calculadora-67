#include <stdio.h>
#include <math.h>

// --- FUNÇÃO DO BHASKARA ---

void executarBhaskara() {
    double a, b, c;
    double delta, x1, x2, xv, yv;

    printf("\n--- FORMULA DE BHASKARA (E VERTICES) ---\n");
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("O valor de A nao pode ser zero em uma equacao do 2o grau.\n");
        return;
    }

    delta = (b * b) - (4 * a * c);
    printf("\nDelta calculado: %.2lf\n", delta);

    if (delta < 0) {
        printf("A equacao nao possui raizes reais (Delta negativo).\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A equacao possui uma raiz real: X = %.2lf\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raizes da equacao:\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }

    xv = -b / (2 * a);
    yv = -delta / (4 * a);

    printf("\n--- VERTICE DA PARABOLA ---\n");
    printf("Xv (Vertice X): %.2lf\n", xv);
    printf("Yv (Vertice Y): %.2lf\n", yv);
}

// --- Código ---

int main() {
    int opcao;
    double num1, num2, resultado;

    printf("--- CALCULADORA AVANCADA ---\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("5 - Raiz Quadrada\n");
    printf("6 - Potenciacao\n"); // Caso 6 recuperado!
    printf("7 - Bhaskara\n");
    printf("Escolha a operacao desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {

        case 1:

            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case 2:

            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case 3:

            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;

        case 4:

            printf("Digite dois numeros: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;

        case 5:

            printf("Digite um numero: ");
            scanf("%lf", &num1);
            if (num1 >= 0) {
                resultado = sqrt(num1);
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Nao existe raiz de numero negativo!\n");
            }
            break;

        case 6:

            printf("Digite a base e o expoente (ex: 2 3 para 2^3): ");
            scanf("%lf %lf", &num1, &num2);
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf\n", resultado);
            break;

        case 7:

            executarBhaskara();
            break;

        default:

            printf("Opcao invalida!\n");
    }

    return 0;
}
