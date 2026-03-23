#include<stdio.h>
int main(){
    int n1,n2;
    printf("Specify two number : \n");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
    printf("%d is a greter then %d",n1,n2);
    else
    printf("%d is a greter then %d",n2,n1);
}