#include<stdio.h>
int add(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
int flag=0;

int main(){
    int result;
    int a,b;
    char ch;
    printf("Specify a operand : ");
    scanf("%d",&a);

    printf("Specify operator : ");
    scanf("%*c");
    scanf("%c",&ch);
    printf("Specify a operand : ");
    scanf("%d",&b);

    switch(ch){
        case '+':
        printf("addition of two number is : %d",add(a,b));
        break;
        
         case '-':
        printf("addition of two number is: %d ",sub(a,b));
        break;

         case '*':
        printf("addition of two number is: %d ",mul(a,b));
        break;

         case '/':
           result =div(a,b);
         if(flag==1){
            printf("0 can't divide any number");
         }else{
        printf("addition of two number is: %d ",result);
         }
        break;

        
    }
}

int add(int a ,int b ){
    return (a+b);
}

int sub(int a ,int b ){
    return (a-b);
}
int mul(int a ,int b ){
    return (a*b);
}
int div( int a ,int b ){
    if(b==0){
        return flag=1;
    }
    return (a/b);
}