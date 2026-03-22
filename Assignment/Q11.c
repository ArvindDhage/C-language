#include<stdio.h>
#include<limits.h>
int main(){
     printf(" char \t \t \t %d \t%%c \t  \t %d to %d \n ",sizeof(char),SCHAR_MIN,SCHAR_MAX);

     printf("unsigned char  \t %d \t %%c \t \t %ld to %ld \n",sizeof(unsigned char),UCHAR_MAX);

     printf("short int \t \t %d \t%%hd \t  \t %d to %d \n ",sizeof(short int),SHRT_MIN,SHRT_MAX);

     printf("unsigned short int  \t %d \t%%hu \t  \t %d to %d \n ",sizeof(unsigned short int),USHRT_MAX);

     printf("int \t \t \t %d \t%%d \t  \t %d to %d \n ",sizeof(int),INT_MIN,INT_MAX);

     printf("unsigned int \t \t %d \t%%u \t  \t %d to %d \n ",sizeof(unsigned int),UINT_MAX);

     printf("long int \t \t %d \t%%ld \t  \t %d to %d \n ",sizeof(long int),LONG_MIN,LONG_MAX);

     printf("unsigned long int \t %d \t%%lu \t  \t %d to %d \n ",sizeof(unsigned long int ),ULONG_MAX);
}


/*| Data Type      | Min       | Max       |
| -------------- | --------- | --------- |
| char           | SCHAR_MIN | SCHAR_MAX |
| unsigned char  | 0         | UCHAR_MAX |
| short          | SHRT_MIN  | SHRT_MAX  |
| unsigned short | 0         | USHRT_MAX |
| int            | INT_MIN   | INT_MAX   |
| unsigned int   | 0         | UINT_MAX  |
| long           | LONG_MIN  | LONG_MAX  |
| unsigned long  | 0         | ULONG_MAX |

*/
