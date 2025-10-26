#include <stdio.h>

void squ(int);
void cub(int);

void squ(int a){
    
    
    int squ = a * a;          

    printf("Square: %d\n", squ);
}

void cub(int a){
    
        
    int cube   = a * a * a;    

    printf("Cube: %d", cube);
}
void main() {
    int num = 2;
    int cube;
    int square;
    squ(num);
    cub(num);
    
}
