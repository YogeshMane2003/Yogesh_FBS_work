//Find sum of all numbers.

#include<stdio.h>

void add(int brr[],int a){
      int sum = 0;   

for(int i=0; i<a; i++){
   
    sum = sum + brr[i];
   
}
printf("Sum of all numbers is :%d\n",sum);


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
    add(arr,s1);

}
