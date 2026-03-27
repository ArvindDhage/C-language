#include<stdio.h>
int main(){
    int ch;
    int year;
    printf("Specify year:");
    scanf("%d",&year);
    printf("1.Jan \n 2.Feb \n 3.Mar \n 4.Apr \n 5.May \n 6.Jun \n 7.Jul \n 8. Aug \n 9.Sep \n 10.Oct \n 11.Nov \n 12.Dec \n");
    printf("Specify month : ");
    scanf("%d",&ch);
    switch(ch){
        case 1: 
        printf("31 days in jan ");
        break;

        case 2: 
        if(year%4==0 && year%100 !=0 || year%400==0){
        printf("30 days in feb  because its leap year");
        }
        else{
            printf("29 days in feb  ");
        }
        break;

        case 3: 
        printf("31 days in mar ");
        break;

        case 4: 
        printf("30 days in April ");
        break;

         case 5: 
        printf("31 days in May ");
        break;

         case 6: 
        printf("30 days in jun ");
        break;

         case 7: 
        printf("31 days in july ");
        break;

         case 8: 
        printf("31 days in Aug ");
        break;

         case 9: 
        printf("30 days in september ");
        break;

         case 10: 
        printf("31 days in Oct ");
        break;

         case 11: 
        printf("30 days in nov ");
        break;

         case 12: 
        printf("31 days in dec ");
        break;

         
           

    }
}