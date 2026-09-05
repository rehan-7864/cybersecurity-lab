#include <stdio.h>

int main(){
    int Number_of_cables;
    int Price_of_one_cable;
    int Total_Cost;


    printf("Enter Number_of_cables=");
    scanf("%d", &Number_of_cables);

    printf("Price_of_one_cable=");
    scanf("%d", &Price_of_one_cable);

    Total_Cost = Number_of_cables * Price_of_one_cable;
    printf("Total Cost= %d\n", Total_Cost);
    
    return 0;
}
