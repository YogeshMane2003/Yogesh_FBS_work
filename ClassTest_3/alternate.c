#include<stdio.h>
void main(){
    int start,end,i,sum;
    printf("Starting number: ");
    scanf("%d",&start);
    printf("Ending number: ");
    scanf("%d",&end);
    
    
    for(i=start;i<=end;i+=2){
        sum=sum+i;
    }
    printf("Addition of alternate numbers from %d to %d : %d ",start,end,sum);

}