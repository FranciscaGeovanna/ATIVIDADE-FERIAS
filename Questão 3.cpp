#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese_Brazil");
    
    int vet[10];
    
    printf ("Programa para imprimir valores que estão nos índices pares do vetor \n\n");
    
    for (int i = 0; i < 10; i++){
		printf ("Digite o %dª número: ", i);
		scanf ("%d", &vet [i]);
    }
    
    printf ("\nNúmeros que estão nos índices pares: ");
    
    for(int x = 0; x < 10; x++){
        if (x % 2 == 0){
            printf("%d ", vet[x]);
        }
    }

    return 0;
}

