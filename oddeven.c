#include<stdio.h>

int main(){

    int numb;

    printf("Write a random number: ");
    scanf("%d",&numb);

    
   

      if(numb%2!= 0){
            printf("Your number is odd... %d",numb);

        }else if(numb<0){
            printf("you entered invalid number");
        }    

        else if (numb%2 == 0 ){
            printf("Your number is even...%d",numb);

        }else{

            printf("You enter invalid number, try again.");
        }  
    
        
    


    return 0;




}