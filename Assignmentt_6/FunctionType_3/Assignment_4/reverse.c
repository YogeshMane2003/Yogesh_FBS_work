#include<stdio.h>

void reverse(int,int,int);

void reverse(int num,int rev,int d1){
    

    while(num != 0){
        d1 = num % 10;
        rev = rev*10 + d1;
        num = num/10;
    }
    printf("Reversed number: %d",rev);

}
void main(){
    int num;
    int rev = 0, d1;
    printf("Enter the number:");
    scanf("%d", &num);
    reverse(num,rev,d1);
}