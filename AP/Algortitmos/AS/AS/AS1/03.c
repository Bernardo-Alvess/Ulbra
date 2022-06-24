#include<stdio.h>

int main()
{
    int arr[10], i, igual;

    for ( int i = 0; i < 10; i++)
    {
        printf("Digite um numero: \n");
        scanf("%d%*c", &arr[i]);
    }
    
    for ( i = 0; i < 10; i++)
    {
        igual = 0;
        for(int j = 0; j < 10; j++){
            if(arr[i] == arr[j]){ // 1 1 2 3 4 5 6 7 8 8
                igual++;
            }
        }
        if(igual > 1){
            printf("numeros que repetem: %i\n", arr[i]);
        }

    }

}   