#include<stdio.h>

void vote(int);

void vote(int age){


    if(age>=18){

        printf("Eligible for vote");
    }else{

        printf("Not eligible for vote");
    }

 }

void main(){
    int age = 23;
    vote(age);
}