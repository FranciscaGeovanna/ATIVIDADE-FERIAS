#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese_Brazil");
    
    int vet[10];
    
    for (int i = 0; i < 10; i++){
        printf ("Digite um número: ");
        scanf ("%d", &vet[i]);
    }
    
    printf ("\nNúmeros pares existentes no vetor de trás pra frente: ");
    
    for (int ii = 10 - 1; ii >= 0; ii--){
        if (vet[ii] % 2 == 0){
        printf ("%d ", vet[ii]);
        }
    } 
    
    return 0;
}