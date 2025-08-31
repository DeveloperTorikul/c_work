#include <stdio.h>

int main(){

    
    float rofik_give;
    int total_amount;
    float rofik;
    float sofik;
    

    printf("Total amount is: ");
    scanf("%d",&total_amount);


    printf("Rofik give of (in percent): ");
    scanf("%f",&rofik_give);
    

    rofik = total_amount *(rofik_give / 100);

    sofik = (total_amount - rofik);

    if(rofik > sofik){

       int much_money = (rofik - sofik);

       printf("Rofik paid %d taka more",much_money);
    }
    else{
        int less_money = (sofik - rofik);

        printf("Rofik paid %d taka less", less_money);
    }

}