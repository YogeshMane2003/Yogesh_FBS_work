#include<stdio.h>

int leap(int x);

int leap(int x){
    

    if(x % 4 == 0){
        return 1;
    }else{

        return 0;
    }
}


void main(){
    int year;
    printf("Enter the year:");
    scanf("%d", &year);
    
    int res = leap(year);

    if(res == 1){
        printf("Year is leap");
    }else{
        printf("Year is not leap");
    }
}