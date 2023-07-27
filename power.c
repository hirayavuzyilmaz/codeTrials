

#include<stdio.h>
int main(){
    int i, base,power,answ=1;
   
    printf("enter the base value: ");
    scanf("%d",&base);

    printf("enter the power value: ");
    scanf("%d",&power);
    
   for( i=1; i<=power; i++){
    answ *= base ;
    
   }
   
printf("answer: %d\n",answ);
    

}