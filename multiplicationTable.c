/*
tihs program shows multplication table
*/

#include<stdio.h>
int main(){
 int i,n;
 printf("Which number do you want to see the multiplication table of?\n");
 scanf("%d",&n);
 for (i=0; i<=10; i++){
 
    printf("%d * %d = %d\n", n ,i ,n*i);
 }
 

}