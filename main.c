#include <stdio.h>

int main(void) {
    int i,j,lunghezza;
    printf("Inserisci la lunghezza del lato del triangolo: ");
    scanf("%d", &lunghezza);
    for (i = 0; i < lunghezza; i++) {
        if (i == lunghezza - 1) {
            for (j = 0; j < lunghezza; j++) {
                printf("* ");
            }
        } else {
            printf("*");
            for (j = 0; j < (2 * i - 1); j++) { printf(" ");
            }if (i > 0) {
                printf("*");
            }
        }  printf("\n");
    }
}


