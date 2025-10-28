//Take two array and add sum in third array

#include<stdio.h>


void add(int xrr[],int yrr[],int a){

    int crr[a];
for(int i=0; i<a;i++){
    crr[i] = xrr[i] + yrr[i];
}
 
printf("Sum of both arrays:\n");
for(int i=0; i<a;i++){
    printf("%d ",crr[i]);
}
}

void main(){
    int s1;
    printf("Enter the size of arrays: ");
    scanf("%d",&s1);

    int arr[s1];
    int brr[s1];
    int crr[s1];


printf("Enter the elements of arr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&arr[i]);
}

printf("Enter the elements of brr[]:\n");

for(int i=0; i<s1; i++){
    scanf("%d",&brr[i]);
}
    add(arr,brr,s1);
}
