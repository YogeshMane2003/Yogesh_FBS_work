#include <stdio.h>

void salary(float,float,float,float,float);

void salary(float da,float ta,float hra,float total,float basic){


    if (basic <= 5000) {
        da  = 0.10 * basic;   
        ta  = 0.20 * basic;   
        hra = 0.25 * basic;   
    } else {
        da  = 0.15 * basic;   
        ta  = 0.25 * basic;   
        hra = 0.30 * basic;   
    }

    total = basic + da + ta + hra;

    printf("Basic Salary: %.2f\n", basic);
    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n", total);
}

void main() {
    float da, ta, hra, total;
    float basic = 6000.0;
    salary(da,ta,hra,total,basic);
}
