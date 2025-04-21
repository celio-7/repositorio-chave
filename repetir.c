#include <stdio.h>

int main() {
    int numero, i;

    printf("Informe um numero entre 1 e 100: ");
    scanf("%d", &numero);

    // Validação usando operador lógico &&
    if (numero >= 1 && numero <= 100) {
        for (i = 1; i <= numero; i++) {
            if (i % 5 == 0 && i % 7 == 0) {
                printf("BINGO\n");
            } else {
                if (i % 10 == 0) {
                    printf("M10\n");
                } else {
                    if (i % 7 == 0) {
                        printf("M7\n");
                    } else {
                        if (i % 5 == 0) {
                            printf("M5\n");
                        } else {
                            printf("%d\n", i);
                        }
                    }
                }
            }
        }
    } else {
        printf("Numero invalido! Digite um valor entre 1 e 100.\n");
    }

    return 0;
}

