#include <stdio.h>

int main(){
    int n = 5;
    for(int i = 2; i<=n; i++){
       if(n%i ==0){
        if(n==i){
            printf("%d",i);
        }
       }
    }
    
}