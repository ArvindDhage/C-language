#include<stdio.h>
void main(){
    int x ,y ;
    printf("Specify x axix : \n");
    scanf("%d",&x);
    printf("Specify y axix : \n");
    scanf("%d",&y);

    if(x>0 && y>0){
    printf("Quadrant 1 ");
    
    }
    else if(x<0 && y>0){
    printf("Quadrant 2");
    
    }
    else if(x<0 && y<0){
    printf("Quadrant 3 ");
    
    }
   else if(x>0 && y<0){
    printf("Quadrant 4");
    
    }
    else if(x==0 && y==0){
    printf("origin");
    
    }
}