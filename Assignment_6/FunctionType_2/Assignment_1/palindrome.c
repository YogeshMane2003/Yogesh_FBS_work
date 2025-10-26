#include<stdio.h>

int palindrome();

int palindrome(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);

    int rev , d1, d2, d3;

    
        d1 = num / 100;
        d2 = (num /10)%10 ;
        d3 = num % 10;

        rev = d3*100 + d2*10 + d1;

        if(num == rev){
            return 1;
        }else{
            return 0;
        }
    }

void main(){
    if(palindrome()){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
}