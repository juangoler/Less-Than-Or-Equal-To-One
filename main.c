#include <stdio.h>

int main () {

    int numero;

    while (1) {  
        printf ("Digite um número: ");
        scanf("%d", &numero);

        if (numero <= 1) {
            printf ("%d é menor ou igual a 1!", numero);
            break;  
        } else {
            printf ("Tente novamente.\n");
            continue;  
        }
    }

    return 0;
}
