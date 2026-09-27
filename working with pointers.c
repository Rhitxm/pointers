//to print age
#include <stdio.h>

int main() {
   int age = 18; //put your age here
    int *ptr= &age;
    int _age=*ptr;
    printf("%d", _age);
    return 0;
}
//a question
#include <stdio.h>
int main(){
int *ptr;
int x;
ptr =&x; //gives output x=0
*ptr = 0; //gives output *ptr=0
printf("x=%d\n", x);
printf("*ptr=%d\n", *ptr);

*ptr+=5; //*ptr=*ptr+5
printf("x=%d\n", x); //gives output x=5
printf("*ptr=%d\n", *ptr); //gives output *ptr=5

(*ptr)++; //*ptr=*ptr+1
printf("x+%d\n", x); //gives output x=6
printf("ptr=%d\n", *ptr); //gives output *ptr=6
return 0;
}
