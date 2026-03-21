#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a number");
    scanf("%d",&a);
    printf("Enter a number");
    scanf("%d",&b);

    printf("Sum of two number is %d \n",a+=b);
    printf("Difference of two number is %d \n",a-=b);
    printf("Product of two number is %d \n",a*=b);


}