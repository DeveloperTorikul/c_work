// প্রশ্ন 2 : ইউজার সাবজেক্টের নাম্বার দিবে গ্রেট বের করতে হবে। ডিপ্লোমার গ্রেট নাম্বারিং অনুসারে।

#include <stdio.h>

int main() {

    float subject_number;
    printf("Enter your subject mark: ");
    scanf("%f",&subject_number);

    if(subject_number >= 0 && subject_number <= 100){

        if(subject_number >= 80){
            printf("A+");
        }
        else if (subject_number >= 75)
        {
           printf("A");
        }
        else if (subject_number >= 70)
        {
            printf("A-");
        }
        else if (subject_number >= 65)
        {
           printf("B+");
        }
        else if (subject_number >= 60)
        {
            printf("B");
        }
        else if (subject_number >= 55)
        {
            printf("B-");
        }
        else if (subject_number >= 50)
        {
            printf("C+");
        }
        else if (subject_number >= 45)
        {
           printf("C");
        }
        else if (subject_number >= 40)
        {
            printf("D");
        }
        else
        printf("Fail");
        
         
        
    }
    else
    {
        printf("Please enter a valid number");
    }
    
   return 0;
}