#include<stdio.h>
int main(){
    int num;
    printf("Enter a number ");
    scanf("%d",&num);

    printf("Given number in character %c \n",num);
    printf("Given number in Decimal %d \n",num);
    printf("Given number in octol %o \n",num);
    printf("Given number in Hexadecimal %x \n",num);
}