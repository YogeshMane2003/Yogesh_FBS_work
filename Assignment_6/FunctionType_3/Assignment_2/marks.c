#include<stdio.h>

void marks(int);

void marks(int marks){ 
    
    

    if(marks > 75){

        printf("Distinction");

    }else if(marks > 65 && marks < 75){

        printf("First Class");

    }else if(marks > 55 && marks < 65){

        printf("Second Class");

    }else if(marks > 40 && marks < 55 ){

        printf("Pass Class");

    } else {

         printf("Fail");
    }
}

void main(){
int m = 78;
   marks(m);

}