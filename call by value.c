//printting square of a number
#include <stdio.h>
void square(int n);

int main() {
   int number=4;
    square(number);
    printf("number=%d\n", number);
    return 0;
}

void square(int n){
    n=n*n;
    printf("sqaure=%d\n", n);
}
//swap 2 numbers a and b
// 1) using call by value
#include <stdio.h>
void swap (int a, int b);
int main(){
    int x=3;
    int y=5;
    swap (x,y);
    printf("x=%d & y=%d", x, y);
    return 0;
}
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d & b=%d\n", a, b);
}
//we see that values of x and y remain the same


//using call by reference
