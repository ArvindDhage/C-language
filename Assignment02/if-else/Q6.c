#include<stdio.h>
int main(){
    int n,a,b,c,d,e;
    printf("Specify five digit number :\n");
    scanf("%d",&n);
    a=n/10000;   //11211/10000=1  a=1
    n%=10000;    //11211%10000=1211  n=1211

    b=n/1000;    //1211/1000=1 b=1
    n%=1000;     //1211%1000=211 n=211

    c=n/100;     //211/100=2 c=2
    n%=100;      //211/100=11 n=11

    d=n/10;      //11/10=1 d=1
    n%=10;       //11%10=1 n=1

    e=n;         //e==n     n=1 then n value is copy in e then e =1

    if(a==d && b==e)  //1==1 && 1==1
    printf("given number is palendrom");
    else
    printf("given number is not palendrom");
}