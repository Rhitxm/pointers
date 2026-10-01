//using call by reference
#include <stdio.h>
void swap (int a, int b);
void _swap(int *a, int *b);

int main(){
    int x=3, y=5;
    _swap(&x, &y);
    printf("x=%d & y=%d", x, y);
    return 0;
}
void _swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
//using call by reference we have successfully changed the value of x and y
//call by reference is used when we want multiple functions to return value
