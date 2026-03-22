#include<stdio.h>
#include<math.h>
int main(){
       int a,b,c ,parameter ,s;
       float area;
       printf("Specify the number : ");
       scanf("%d %d %d",&a,&b,&c);

       parameter=a+b+c;

       printf("parameter of Trangle is : %d \n",parameter);
       // Calculate semi-perimeter
       s =  parameter/ 2.0;


       area=sqrt(s*(s-a)*(s-b)*(s-c));

       printf("Area of trangle is : %f",area);
}