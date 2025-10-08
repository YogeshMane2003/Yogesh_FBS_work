#include<stdio.h>

void main(){
    int start;
    int end;
    int i;

    printf("Starting number: ");
    scanf("%d",&start);

    printf("Ending number: ");
    scanf("%d",&end);

    printf("Even numbers: ");
    for(i = start; i<=end; i++){
        if(i%2==0){
            printf("%d ",i);
            i++;
        }
    }

     printf("\nOdd numbers: ");
    for(i = start; i<=end; i++){
        if(i%2!=0){
            printf("%d ",i);
            i++;
        }
    }
}