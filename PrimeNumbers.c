#include<stdio.h>
int main(){
    int  i, numb, counter;

    printf("enter a number: ");
    scanf("%d",&numb);

    for(i=2; i<numb; i++){
        
        if(numb%i==0){
            counter++;
        }
    }
    if(counter!=0){
           printf("Your number is not prime");
    }
        
        else{
            printf("Your number is prime");
    } 

   
 
}
