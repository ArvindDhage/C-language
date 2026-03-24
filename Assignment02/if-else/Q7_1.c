#include<stdio.h>
int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);


    //using logical operoter

   if(year%4==0 && year%100!=0 || year%400==0)
    printf("Its a leap year ");
    else
    printf("its not a leap year ");


    //Conditional operator 

    
}