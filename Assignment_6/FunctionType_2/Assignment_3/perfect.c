#include <stdio.h>

int perfect();

int perfect(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);  
    int i = 1, sum = 0;

    while (i < n) {
        if (n % i == 0) {
            sum = sum + i;
        }
        i++;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}
void main() {
   if(perfect())
   printf("The number is Perfect\n");
   else
   printf("The number is Not Perfect");

}
