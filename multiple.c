#include<stdio.h>
int main(){

    int x, y ;

    printf("Write a x value  ");
    scanf("%d",&x);

    printf("Write a y value  ");
    scanf("%d",&y);



    if(x%y==0){
        
        printf("x is an exact multiple of y ");

    }else{
         printf("X is not exact multiple of y ");

    }




return 0;




}