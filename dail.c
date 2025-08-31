#include <stdio.h>
int main(){
   int amount =50, dialNumber=121, userDialNumber,rechargeAmount,B_rechargeAmount,newAmount;
   int mobileRecharge =1,buyInternet=2,buyMinute=3,buySms=4,myOffer=5,exit=0,bkash=2,nagad=1;
   int choose, rechargeChoose,internetChoose;
   int internet=20,_100mb=100, _500mb=500, _1gb=1000, _100mbPrice=10,_500mbPrice = 20, _1gbPrice=30,num1=1,num2=2,num3=3;

  printf("Dial the number: ");
  scanf("%d",&userDialNumber);

  if(dialNumber == userDialNumber){
    printf("1.Mobile Recharge\n2.Buy internet\n3.Buy minute\n4.Buy SMS\n5.My offers\n0.Exit\nChoose a potion: ");
    scanf("%d",&choose);

    if(choose == mobileRecharge){
        printf("1.Nagad\n2.Bkash\n0.Exit\nChoose your option: ");
        scanf("%d",&rechargeChoose);

        if(rechargeChoose == nagad){
            printf("Nagad recharge amount: ");
            scanf("%d",&rechargeAmount);

            if(rechargeAmount>0){
                newAmount = amount +rechargeAmount;
                printf("Your Nagad recharge amount is %d TK successful\nand your balance is %d TK",rechargeAmount,newAmount);
            }
            else{
                printf("Enter a valid amount");
            }
        }
        else if (rechargeChoose == bkash)
        {  
            printf("bKash recharge amount: ");
            scanf("%d",&rechargeAmount);

            if(rechargeAmount>0){
                amount +=rechargeAmount;
                printf("Your Bkash recharge amount is %d TK successful\nand your balance is %d TK",rechargeAmount,amount);
            }
            else{
                printf("Enter a valid amount");
            }
        }
        else if (rechargeChoose == exit)
        {
            printf("Thank you for use this system");
        }
        else
        printf("Choose a right option");
        
        

    }
    else if(choose == buyInternet){
        printf("1.100mb\n2.500mb\n3.1gb\n0.exit\nchoose your option: ");
        scanf("%d",&internetChoose);

        if(internetChoose == num1){
            if(amount >_100mbPrice){
                amount-=_100mbPrice;
                internet += _100mb;

                printf("%d mb pack is add successful\nyour total mb is %d mb \nand your balance %d TK.",_100mb,internet,amount);

            }
            else
            printf("invalid input");
        }
        else if (internetChoose == num2)
        {
           if(amount >_500mbPrice){
                amount-=_500mbPrice;
                internet += _500mb;

                printf("%d mb pack is add successful\nyour total mb is %d mb \nand your balance %d TK.",_500mb,internet,amount);

            }
            else
            printf("invalid input");
        }
        else if (internetChoose == num3)
        {
          if(amount >_1gbPrice){
                amount-=_1gbPrice;
                internet += _1gb;

                printf("%d mb pack is add successful\nyour total mb is %d mb \nand your balance %d TK.",_1gb,internet,amount);

            }
            else
            printf("invalid input");  
        }
        else if (internetChoose == exit)
        {
            printf("Thank you for use this system");
        }
        else
        printf("Choose a right option");
        
        
        
    }

  }

}