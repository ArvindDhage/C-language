#include<stdio.h>
#include<string.h>
int main(){
    char month [50];
    int year;
    printf("Enter the year : \n");
    scanf("%d",&year);

    printf("Enter the month : ");
    scanf("%s",month);
    if(strcmp(month,"jan")==0)
    printf("31 days");

    if(strcmp(month,"feb")==0){
    if( year%4==0 && year%100!=0 || year%400==0){
        printf("29 days");
    }
    else{
    printf("28 days");
    }
}

    if(strcmp(month,"mar")==0)
    printf("31 days");

    else if(strcmp(month,"apr")==0)
    printf("30 days");

    else if(strcmp(month,"may")==0)
    printf("31 days");

    else if(strcmp(month,"jun")==0)
    printf("30 days");

    else if(strcmp(month,"jul")==0)
    printf("31 days");

    else if(strcmp(month,"aug")==0)
    printf("31 days");

    else if(strcmp(month,"sep")==0)
    printf("30 days");

    else if(strcmp(month,"oct")==0)
    printf("31 days");

    else if(strcmp(month,"nov")==0)
    printf("30 days");

    else if(strcmp(month,"dec")==0)
    printf("31 days");
}
