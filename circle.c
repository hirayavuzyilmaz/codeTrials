#include<stdio.h>

int main(){

    const float pi= 3.14;
    float r , circumference , area ;


    printf("Please type your radius value ");
    scanf("%f",&r);
     
    circumference= 2*pi*r;
    area= r*r*pi;

    printf("your circumference is %f", circumference);
    printf("your area is %f", area);

    return 0;





}