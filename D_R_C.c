#include <stdio.h>
int main(){

    

    float first_semester,second_semester,there_semester,four_semester,five_semester,six_semester,seven_semester,eight_semester;
    float final_result;
    

 
    printf("Enter your 1s semester result: ");
    scanf("%f",&first_semester);
   

    printf("Enter your 2ed semester result: ");
    scanf("%f",&second_semester);

    printf("Enter your 3ed semester result: ");
    scanf("%f",&there_semester);

    printf("Enter your 4th semester result: ");
    scanf("%f",&four_semester);

    printf("Enter your 5th semester result: ");
    scanf("%f",&five_semester);

    printf("Enter your 6th semester result: ");
    scanf("%f",&six_semester);

    printf("Enter your 7th semester result: ");
    scanf("%f",&seven_semester);

    printf("Enter your 8th semester result: ");
    scanf("%f",&eight_semester);



    float first_s_p = first_semester * (5.0/100);
    float second_s_p = second_semester * (5.0/100);
    float there_s_p = there_semester * (5.0/100);
    float four_s_p = four_semester * (15.0/100);
    float five_s_p = five_semester * (15.0/100);
    float six_s_p = six_semester * (20.0/100);
    float seven_s_p = seven_semester * (25.0/100);
    float eight_s_p = eight_semester * (10.0/100);


    final_result = (first_s_p + second_s_p + there_s_p + four_s_p + five_s_p + six_s_p + seven_s_p + eight_s_p);


    printf("Your Final Result is: %.2f",final_result);
}

