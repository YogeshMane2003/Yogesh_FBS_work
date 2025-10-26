#include <stdio.h>

int age();

int age(){
     int age;
     printf("Enter the age: ");
     scanf("%d",&age);

    if (age < 12) {
        return 1;
    }
    else if (age >= 12 && age <= 19) {
        return 2;
    }
    else if (age >= 20 && age <= 59) {
        return 3;
    }
    else  {
        return 4;
    }
}
void main() {
int res= age();
if(res==1)
   printf("The person is Child");
else if(res==2)
    printf("The person is Teenager");
else if(res==3)
    printf("The person is Adult");
else
    printf("The person is Senior");
}
