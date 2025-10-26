#include<stdio.h>

int reverse();

int reverse(){
    int num;
    int rev = 0, d1;


    printf("Enter the number:");
    scanf("%d", &num);

    while(num != 0){
        d1 = num % 10;
        rev = rev*10 + d1;
        num = num/10;
    }
    return rev;

}
void main(){
    int res = reverse();
    printf("Reversed number is %d",res);
}