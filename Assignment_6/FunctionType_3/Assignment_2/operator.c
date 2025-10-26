#include <stdio.h>

void operator(int,int,char);

void operator(int num1,int num2,char op){
    

    if (op == '+') {
        printf("Result: %d\n", num1 + num2);
    }
    else if (op == '-') {
        printf("Result: %d\n", num1 - num2);
    }
    else if (op == '*') {
        printf("Result: %d\n", num1 * num2);
    }
    else if (op == '/') {
         printf("Result: %d\n", num1 / num2);
    }
    else  {
         printf("Result: %d\n", num1 % num2);
    }
}
void main() {
    int num1 = 2, num2 = 6;
    char op = '+';
    operator(num1,num2,op);
}

