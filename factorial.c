#include<stdio.h>

int main(){
    int fact=1, i, numb;

    printf("Enter a number: ");
    scanf("%d",&numb);
     if(numb<0){
            printf("Enter a valid number!");
        }
        else{
        
        for(i=1; i<=numb; i++){
        fact *=i;
    }
       printf("%d ! = %d",numb, fact);  
    }




}