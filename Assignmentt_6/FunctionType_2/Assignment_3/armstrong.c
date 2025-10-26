#include <stdio.h>

int armstrong();

int armstrong(){
    int n;
    int original, remainder, result = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    original = n;

    while (n > 0) {
        remainder = n % 10;     
        result = result + (remainder * remainder * remainder); 
        n = n / 10;                    
    }

    if (result == original)
        return 1;
    else
       return 0;
}

void main() {
   if(armstrong())
   printf("Number is Armstrong\n");
   else
   printf("Number is Not Armstrong");
}
