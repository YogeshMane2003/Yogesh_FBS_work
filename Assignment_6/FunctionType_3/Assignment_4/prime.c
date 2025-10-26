#include <stdio.h>

void prime(int,int,int,int);

void prime(int n,int i,int j,int flag){

    printf("Prime numbers upto %d: \n",n);

    for(i = 2; i <= n; i++) {      
        flag = 0;
        for(j = 2; j <= i / 2; j++) {  
            if(i % j == 0) {
                flag = 1;          
                break;
            }
        }
        if(flag == 0) {            
            printf("%d ", i);
        }
    }
    

}

void main() {
    int n = 50;    
    int i, j, flag;              
    prime(n,i,j,flag);
}
