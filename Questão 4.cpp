#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese_Brazil");
    
    float vet [10];
    float aux;
    
    printf ("Programa para ordernar 10 números em ordem crescente\n");
    
    for (int x = 0; x < 10; x++){
        printf ("Digite um número: ");
        scanf ("%f", &vet[x]);
    }
    
    for (int i = 0; i < 10; i++){
        for (int ii = i; ii < 10; ii++){
            if (vet[i] > vet[ii]){
                aux = vet[i];
                vet[i] = vet[ii];
                vet[ii] = aux;
            }
        }
        printf ("%.2f  ", vet[i]);
    }

    return 0;
}

