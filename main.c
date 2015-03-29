#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char** argv) {
    int v[N];
    int i,j,numero;
    for (i=0;i<N;i++) {
        printf("Inserisci il %d° valore: ", i+1);
        scanf("%d", &numero);
        
        for (j=i; j>0 && v[j-1]>numero;j--) {
            v[j]=v[j-1];
        }
        v[j]=numero;
    }
    printf("In ordine crescente, i valori della lista sono:\n");
    for (i=0;i<N;i++) {
        printf("%d\n", v[i]);
    }
    return (EXIT_SUCCESS);
}

