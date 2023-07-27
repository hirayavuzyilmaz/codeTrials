#include<stdio.h>

int main(){

    int quiz, total, final;

    printf("Write student's quiz score: ");
    scanf("%d",&quiz);

    printf("Write student's final score: ");
    scanf("%d",&final);



    total= ((quiz*30) + (final*70))/100;
        if(final<60){
            printf("Sorry you failed. Your final exam is not enouh");
        }
        else if(total>50){
            printf("Congrats! you passed. Your total score is: %d ",total);
        }
        else{
            printf("Sorry! You failed");
        }


return 0;




}