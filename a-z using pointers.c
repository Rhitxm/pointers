#include <stdio.h>
void alphabets(char A, char Z);

int main(){
    char A='a', Z='z';
    alphabets(A, Z);
    return 0;
}
void alphabets(char A, char Z){
    for(char i=A; i<=Z; i++){
        printf("%c\n", i);
    }
}
