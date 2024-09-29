#include <stdio.h>
#include<string.h>
int e_ = 0;
void existe_e(char string[]){

    for(int i=0;i<strlen(string);i++) {
            if(string[i]== 'e'){
                e_ = 1;
                break;
            }

    }
}
int main(){
    char string[20];

    printf("donner la chaine de character");
    gets(string);
    existe_e(string);
    if(e_==1) printf(" e existe ");
    else printf("e n'existe pas");

}
