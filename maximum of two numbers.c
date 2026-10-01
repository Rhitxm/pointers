#include <stdio.h>
void maximum(int a, int b);

int main(){
    int a;
    int b;
    printf("enter your first number:\n");
    scanf("%d", &a);
    printf("enter your second number:\n");
    scanf("%d", &b);
    maximum(a, b);
    return 0;
}
void maximum(int a, int b){
    if(a>b){
        printf("first entered number is greater\n");
    }
    else if(a<b){
        printf("second entered number is greater\n");
    }
    else if(a==b){
        printf("both the numbers are equal\n");
    }
    else{
        printf("invalid\n");
    }
}
