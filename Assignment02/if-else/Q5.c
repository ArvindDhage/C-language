#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Specify three number :\n ");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2 && n1>n3)
    printf("%d its a greter number ",n1);
    else if(n2>n1 && n2>n3)
    printf("%d its a greter number",n2);
    else
    printf("%d grete number ",n3);

}



/*
Crocodile Trick (Best yaad rehne wala 🐊)

Socho ek crocodile hai:

Wo hamesha bada number khata hai

Example:

5 < 10 → crocodile ka muh 10 ki taraf (kyunki wo bada hai)
⚡ Quick Practice

Try karo:

3 __ 8
15 __ 9
20 __ 20

Answers:

3 < 8
15 > 9
20 = 20

Agar tu chahe toh main tujhe number line se visual samjha sakta hu ya MCQ practice bhi kara deta hu 👍*/