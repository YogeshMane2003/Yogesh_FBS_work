#include<stdio.h>

int vowel();

int vowel(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if(ch == 'a' || ch =='e'  || ch =='i' || ch =='o' || ch =='u' || ch == 'A' || ch =='E'  || ch =='I' || ch =='O' || ch =='U')
    {
        return 1;
    }else{
       return 0;
    }
}

void main(){
    if(vowel())
    printf("Character is vowel");
    else
    printf("Character is consonant");
}