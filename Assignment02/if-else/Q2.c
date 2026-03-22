#include<stdio.h>
int main(){
    int num;
    printf("Enter a number to check its even or odd \n ");
    scanf("%d",&num);

    if(num%2==0)
    printf("%d its even number ",num);

    else
    printf("%d its odd number ",num);
}