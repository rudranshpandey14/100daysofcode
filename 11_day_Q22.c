#include<stdio.h>

/*Q22: Write a program to find profit or loss percentage given cost price and selling price.
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/

int main(){
    float selling_price , cost_price , profit, loss , profit_percentage , loss_percentage;

    printf("Enter the cost price of the product:");
    scanf("%f" , &cost_price);

    printf("Enter the selling price of the product:");
    scanf("%f" , &selling_price);

    profit = selling_price - cost_price;
    profit_percentage = (profit / cost_price) * 100;

    loss = cost_price - selling_price;
    loss_percentage = (loss / cost_price) * 100;

    if (selling_price > cost_price)
    {
        printf("Profit is %f%%." , profit_percentage );
    }

    else if (cost_price > selling_price)
    {
        printf("Loss is %f%%." , loss_percentage);
    }
    
    else
    {
        printf("No profit No loss.");
    }
    
    


    return 0;
}