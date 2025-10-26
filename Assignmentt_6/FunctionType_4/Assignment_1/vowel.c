#include<stdio.h>

int vowel(char x);

int vowel(char x){

    if(x == 'a' || x =='e'  || x =='i' || x =='o' || x =='u')
    {
        return 1;
    }else{
        return 0;
    }
}

void main(){
   char ch;

    printf("Enter the character:");
    scanf("%c", &ch);

    int res = vowel(ch);
    if(res == 1)
        printf("Character is vowel");
    else
        printf("Character is consonant");
}