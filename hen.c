#include <stdio.h>
int main(){
    int AveragePriceOfChicken,NumberOfChickens,AverageSellingPriceOfChicken,NumberOfChickensThatDied;
    int TotalNumberOfEggs,NumberOfSpoiledEggs,AverageSellingPriceOfEggs;
    int MaintenanceCost;
    int totalChickenSell, totalEggsSell, totalSell;
    int loss,profit;
    int isProfit,isloss;

    printf("Number of chicken: ");
    scanf("%d",&NumberOfChickens);

    printf("Average price of chicken: ");
    scanf("%d",&AveragePriceOfChicken);

    printf("Average selling price of chicken: ");
    scanf("%d",&AverageSellingPriceOfChicken);

    printf("Number of chicken that died: ");
    scanf("%d",&NumberOfChickensThatDied);

    //egg sector....

    printf("Total number of eggs: ");
    scanf("%d",&TotalNumberOfEggs);

    printf("Number of spoiled eggs: ");
    scanf("%d",&NumberOfSpoiledEggs);

    printf("Average selling price of eggs: ");
    scanf("%d",&AverageSellingPriceOfEggs);

    printf("Maintenance cost: ");
    scanf("%d",&MaintenanceCost);

    totalChickenSell = (NumberOfChickens-NumberOfChickensThatDied)*AverageSellingPriceOfChicken;
    totalEggsSell = (TotalNumberOfEggs-NumberOfSpoiledEggs)*AverageSellingPriceOfEggs;

    totalSell = (totalChickenSell+totalEggsSell);
   printf("Total Sell of %d TK",totalSell);

   

   isProfit = totalSell;
   isloss = NumberOfChickens + MaintenanceCost;

   if(isProfit>isloss){
     profit = isProfit-isloss;
    printf("\nProfit is %d TK ",profit);
   }
   else{
     loss = isloss - isProfit;
    printf("\nLoss is %d TK",loss);
   }
 return 0;
}