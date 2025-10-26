#include<stdio.h>

void vowel(char);

void vowel(char ch){


    if(ch == 'a' || ch =='e'  || ch =='i' || ch =='o' || ch =='u')
    {
        printf("Character is vowel");
    }else{
        printf("Character is consonant");
    }
}

void main(){
    char ch = 'i';
    vowel(ch);
}