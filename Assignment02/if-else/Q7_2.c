#include<stdio.h>
int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    //without using logical operator 
    if(year%4==0){
       if(year%100==0){
          if(year%400==0){
            printf("366 days (leap year)");
          }
          else{
            printf("365 days (not leap year)");
          }
           
        }else{
            printf("366 days (leap year)");
        }
    }
    else
    printf("365 days ");

     

    
}