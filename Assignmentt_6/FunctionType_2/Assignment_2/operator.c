#include <stdio.h>

int operator();

int operator(){
    int num1,num2;
    char op;
    int res;
    printf("Enter First number: \n");
    scanf("%d",&num1);
    printf("Choose the operator('+','-','*','/','%'): \n");
    scanf(" %c",&op);
    printf("Enter Second number: \n");
    scanf("%d",&num2);
    

    if (op == '+') {
        return num1+num2;
    }
    else if (op == '-') {
        return num1-num2;
    }
    else if (op == '*') {
        return num1*num2;
    }
    else if (op == '/') {
        return num1/num2;
    }
    else  {
        return num1%num2;
    }
}
void main() {
    int res= operator();
    printf("The result is : %d",res);
}

