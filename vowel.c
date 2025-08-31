#include <stdio.h>

int main(){
    char input;

    printf(" Enter a character: ");
    scanf("%c",&input);

    int num = input;
    char character;
    //printf("%d",num);

   if(num >= 65 && num <=122 ){
        if(num ==65 || num==101||num==105||num==111||num==117){
             character = num;
            printf("%c is vowel",character);
        }
        else{
            character = num;
            printf("%c is consonant",character);
        }
    } 
}