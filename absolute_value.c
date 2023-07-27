#include<stdio.h>
int main(){

    int number , newNumber;

    printf("Write a number");
    scanf("%d",&number);

    if(number<0){

        newNumber= number*-1;
        printf("Absolute value of the number is: %d",newNumber);
    }else{
        printf("Absolute value of the number is: %d",number);
    }








}