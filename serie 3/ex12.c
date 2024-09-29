#include <stdio.h>
#include<string.h>
int c;
void chercher_a(char string[]){

    for(int i=0;i<strlen(string);i++) {
            if(string[i]=='a') c++;

    }
}
int main(){
    char string[20];

    printf("donner la chaine de character");
    gets(string);
    chercher_a(string);
    printf("combien de a %d",c);

}
