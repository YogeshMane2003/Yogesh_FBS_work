#include <stdio.h>

int prime();

int prime(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); 
    int i = 2;  

    if (n <= 1) {
        
        return 1;
    }

    while (i <= n/2) {
        if (n % i == 0) {
            
             return 1;   
        }
        i++;
    }
    return 0;
}

void main() {
    if(prime())
    printf("Number is not prime");
    else
    printf("Number is prime");

}

