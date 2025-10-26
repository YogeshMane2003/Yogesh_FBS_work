#include<stdio.h>

void marks(float,float,float,float,float,float,float);

void marks(float a,float b,float c,float d,float e,float f,float g){


    f = a + b + c + d + e;

    g = (f / 500) * 100;

    printf("Total Marks are %0.2f\n", f);
    printf("Percentage %0.2f%%", g);
}
void main(){
    float Eng = 80.0;
    float Mar = 75.0;
    float Math = 90.0;
    float Sci = 85.0;
    float His = 70.0;

    float totalMarks, percentage;
    marks(Eng,Mar,Math,Sci,His,totalMarks,percentage);
}