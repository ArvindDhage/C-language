// Write a program to convert temperature in celucus to farenhit and vice versal formula for conversion

#include<stdio.h>
int main(){
    float c,f;

    printf("Enter the Frhrehit : ");
    scanf("%f",&f);

    c=(0.5555)*(f-32);

    printf("temperature in celucus to farenhit : %f ",c);

}