/*
প্রশ্ন ৪: শফিক ও রফিক হোটেলে খেতে গেছে। মোট বিল হয়েছে x টাকা। রফিক পে  করেছে মোট বিলের y% পারসেন্ট। 
‌‌‌‌‌‌(ক). রফিক কত টাকা পে করেছে? 
(খ). রফিক কত টাকা বেশি অথবা কম পেয়ে করেছে। */

#include <stdio.h>

int main(){

    float rofik_give;
    int total_amount;
    float rofik;
    

    printf("Total amount is: ");
    scanf("%d",&total_amount);


    printf("Rofik give of (in percent): ");
    scanf("%f",&rofik_give);
    

    rofik = total_amount *(rofik_give / 100);

    printf("Rofik payable restaurant bill is %.2f Taka",rofik);

    return 0;
}