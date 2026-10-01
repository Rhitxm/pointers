//calculating the sum, prod, avg of two numbers
#include <stdio.h>
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main(){
    int a;
    int b;
    printf("Enter your first number:\n", a);
    scanf("%d", &a);
    printf("Enter your second number\n", b);
    scanf("%d", &b);
    int sum, prod, avg;
    doWork(a, b, &sum, &prod, &avg);

    printf("sum=%d, prod=%d, avg=%d\n", sum, prod, avg);
    return 0;
}
void doWork(int a, int b, int *sum, int *prod, int*avg){
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}
