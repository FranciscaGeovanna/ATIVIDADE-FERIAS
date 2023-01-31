#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese_Brazil");
    
    int vet[10];
    
    for (int i = 0; i < 10; i++){
        printf ("Digite um número: ");
        scanf ("%d", &vet[i]);
    }
    
    printf ("\n");
    
    for(int j = 0; j < 10; j++){
        if(vet[j] % 2 == 0){
            printf("%d  ", vet[j] = 1);
        } else{
            printf ("%d  ", vet[j] = -1);
         }
    }

    return 0;
}

