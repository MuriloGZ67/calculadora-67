#include <stdio.h>
#include <math.h>

void executarBhaskara() {
    double a, b, c, delta, x1, x2, xv, yv;
    int opcao;
    
    printf("\n--- FORMULA DE BHASKARA (ax^2 + bx + c = 0) ---\n");
    printf("Digite o valor de a: ");
    scanf("%lf", &a); 
    
    if (a == 0) {
        printf(">>> Erro: O valor de a nao pode ser zero em equacao do 2o grau.\n");
        return;
    }
    
    printf("Digite o valor de b: ");
    scanf("%lf", &b);
    printf("Digite o valor de c: ");
    scanf("%lf", &c);
    
    // Delta

    delta = pow(b, 2) - (4 * a * c);
    printf("\nDelta calculado: %.2lf\n", delta);
    
    if (delta < 0) {
        printf(">>> Nao existem raizes reais (Delta eh negativo).\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf(">>> Existe apenas uma raiz real: X = %.2lf\n", x1);
    } else { 
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf(">>> Raizes encontradas:\n");
        printf("X1 = %.2lf\n", x1);
        printf("X2 = %.2lf\n", x2);
    }

    // X e Y do vértice

    printf("\nDeseja calcular o vertice da parabola (Xv e Yv)?\n");
    printf("1 - Sim\n");
    printf("2 - Nao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        xv = -b / (2 * a);
        yv = -delta / (4 * a);
        printf("\n>>> Vertice da parabola: Xv = %.2lf, Yv = %.2lf\n", xv, yv);
    } else {
        printf("\nCalculo encerrado sem o vertice.\n");
    }
}
