#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a first number  : \n");
    scanf("%d",&a);
    printf("Enter a Second number : \n");
    scanf("%d",&b);

    if(a!=0 && b!=0)
    printf("Addition of two number is : %d ",a+b);
    else
    printf("Number can not divisible by zero");
}