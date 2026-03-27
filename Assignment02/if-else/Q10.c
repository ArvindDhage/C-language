#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char c;
    printf("Specify a character : ");
    scanf(" %c",&c);

    printf("ALPHABET \t : %c is a letter (65 to 90 or 97 to 122)\n",c);

   if(c<'A' && c<'Z'){
   //if(isupper(c)){
        printf("UPPERCASE \t : %c is an uppercase latter (65 to 90)\n",c);
    }

    if(c>='A'&& c>='Z'){
   //if(islower(c)){
        printf("LOWERCASE \t : %c is an uppercase latter (65 to 90)",c);
    }

    if(c>=0 && c>=9){
    //if(isdigit(c)){
        printf("DIGIT \t : %c is digit (48 to 57)",c);
    }

    //if(c==' '){
    if(isspace(c)){
          printf("SPACE  : %c is a (32),tab(9),carriage return(13),new line (10)",c);
    }
    else{
        printf("OTHER \t : No list above ");
    }

}