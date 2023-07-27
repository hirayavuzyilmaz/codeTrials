#include<stdio.h>
#include<stdlib.h>
int main ()
{
int c, b, h;


printf("Enter a base value: ");
scanf("%d", &b);
printf("Enter a heihgt value: ");
scanf("%d", &h);

c= (b*h)/2;

printf("Area of triangle:%.2d",c);

}