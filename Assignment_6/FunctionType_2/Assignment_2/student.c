#include <stdio.h>

float student();

float student(){
    int price;
    float discount=0.0,finalAmount;
    char student; 
    printf("Enter the price: \n");
    scanf("%d",&price);
    printf("Are you a student or not?(y/n or Y/N): ");
    scanf(" %c",&student);

    if (student == 'y' || student == 'Y') {
        
        if (price > 500) {
            discount = 0.20 * price;
        } else {
            discount = 0.10 * price;
        }

    } else { 

        if (price > 600) {
            discount = 0.15 * price;
        } else {
            discount = 0.0; 
        }
    }

    finalAmount = price - discount;

    printf("Discount: %.2f\n", discount);
    
    return finalAmount;

}
void main() {
   
float res=student();
printf("Final amount: %.2f",res);
    
}
