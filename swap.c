#include <stdio.h>

void swap(int, int);
void swap2(int *, int *);

void main(void){
    int v1=5, v2=10;
    printf("v1 = %d\n", v1);
    printf("v2 = %d\n", v2);

    printf("Aufruf von Swap\n");
    swap(v1,v2);
    printf("v1 = %d\n" ,v1);
    printf("v2 = %d\n" ,v2);

    printf("Aufruf von Swap2\n");
    swap2(&v1,&v2);
    printf("v1 = %d\n" ,v1);
    printf("v2 = %d\n" ,v2);

}
void swap(int x, int y){
    int temp = x;
    x=y;
    y=temp;
    printf("x = %d\n" , x);
    printf("y = %d\n" , y);

}

void swap2(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
    printf("*x = %d\n", *x);
    printf("*y = %d\n", *y);
    
}