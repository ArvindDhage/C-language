#include<stdio.h>
int main(){
    int num;
    printf("Specify a number : ");
    scanf("%d",&num);

    if(num>0)
    printf("Number is positive ");
    else if(num<0)
    printf("Number is Negative");
    else if(num==0)
    printf("Number is zero ");

}