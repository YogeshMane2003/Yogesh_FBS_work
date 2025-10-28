//Find odd and even among the numbers.

#include<stdio.h>

void evenodd(int brr[],int a){

printf("\nEven numbers: ");
for(int i=0; i<a; i++){
    if(brr[i]%2 ==0){
        printf("%d ",brr[i]);
    } 
}

printf("\nOdd numbers: ");
for(int i=0; i<a; i++){
    if(brr[i]%2 != 0){
        printf("%d ",brr[i]);
    } 
}
}

void main(){
    int s1;
    printf("Enter the size of arr[]: ");
    scanf("%d",&s1);

    int arr[s1];
     
printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}
    evenodd(arr,s1);
}

