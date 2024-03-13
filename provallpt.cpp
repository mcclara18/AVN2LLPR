#include <stdio.h>

 int main() {
    int vet[9];
    int i, j, c;
    
    for (i = 0; i < 9; i++) {
        printf("Digite o  %d número: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 1; j <= vet[i]; j++) {
            if (vet[i] % j == 0) {
                c++;
            }
        }
        if (vet <= 2) {
            printf("primo: %d, posição do número primo: %d", vet[i], i + 1);
        }
    }

    return 0;
}



