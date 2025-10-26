#include<stdio.h>

int vote();

int vote(){
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    if(age>=18){
        return 1;
    }else{
        return 0;
    }

 }

void main(){
    if(vote())
     printf("Eligible for vote");
    else
     printf("Not eligible for vote");
}