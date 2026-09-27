//to print age
#include <stdio.h>

int main() {
   int age = 18; //put your age here
    int *ptr= &age;
    int _age=*ptr;
    printf("%d", _age);
    return 0;
}
