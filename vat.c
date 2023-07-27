#include<stdio.h>

int main(){

    float price, totalPayment;


    printf("Write price of your product: ");
    scanf("%f",&price);

    totalPayment = price + ((price*18)/100);


    printf("your total payment is: %f", totalPayment);

    return 0;

}
