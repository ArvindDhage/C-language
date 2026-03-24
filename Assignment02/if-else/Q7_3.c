 //Conditional operator 

 #include<stdio.h>
int main(){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);


    //using logical operoter

   (year%4==0 && year%100!=0 || year%400==0) ?printf("366 days (leap year) "): printf("365 days (Its not a leap year) ");


    //Conditional operator 

    
}