#include<stdio.h>
int main(){
    int empid;
    int deptno;
    char descode;
    char deptname [40];
    char designation[40];
    printf("Specify a Employee ID : ");
    scanf("%d",&empid);
    
    printf("Specify a Department number : ");
    scanf("%d",&deptno);

    printf("Specify Designation code : ");
    scanf("%*c");
    scanf("%c",&descode);


    switch(deptno){
        case 10:
            sprintf(deptname,"Marketing");
            break;
        case 20:
            sprintf(deptname,"Management");
            break;
        case 30:
            sprintf(deptname,"Sales");
            break;
        case 40:
            sprintf(deptname,"Designing");
            break;
    }

    switch(descode){
        case 'M':
           sprintf(designation,"Manager");
           break;
        case 'S':
           sprintf(designation,"Supervisor");
           break;
        case 's':
        sprintf(designation,"security officer");
           break;
        case 'C':
        sprintf(designation,"Clark");
           break;
    }
    printf("Employee with employee %d is working in \"%s\" department as \"%s\".",empid, deptname, designation);

}