#include <stdio.h>
#include <stdlib.h>
//Generar y mostrar los múltiplos de K menores que un valor Q. (K y Q se leen de teclado).
int main()
{
    int k, q, i;

    printf("Multiplos de: "); scanf("%d", &k);
    printf("Menor que: "); scanf("%d", &q);

    for(i = 0 ;i < q; i+= k){
        printf("%d\n", i);
    }

    return 0;
}
