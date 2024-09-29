#include <stdio.h>
#include<string.h>
void inverse(char string[]){

    for(int i=0;i<strlen(string)/2;i++) {
            char temp = string[i];
            string[i] = string[strlen(string)-i-1];
            string[strlen(string)-i-1] =temp;
    }
}
int main(){
    char string[20];

    printf("donner la chaine de character ");
    gets(string);
    printf("avant inverse %s",string);
    inverse(string);
    printf("\naprés inverse %s",string);
}
