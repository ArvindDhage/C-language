#include<stdio.h>
int main(){
    int qnt;
    float disscount=0,total,final;
    printf("Enter the Quentity of the productb : ");
    scanf("%d",&qnt);

    total=qnt*5;
    if(qnt>=50){
        disscount=total*0.15;
    }
    if(qnt>=30){
        disscount=total*0.10;
    }
    else{
           disscount=0;
    }

    final=total-disscount;

    printf("Total Quentity is %d *5 = %.2f \n",qnt,total);
    printf("Discount is : %.2f\n",disscount);
    printf("Final price : %.2f - %.2f = %.2f",total,disscount,final);

}



/*Problem Summary (Question 8)

👉 User se quantity (qty) input lena hai
👉 Har item ka price = ₹5 (fixed)

🧠 Main Task
Total price nikalna
total = qty × 5
Discount apply karna (based on qty)
qty > 50  → 15% discount  
qty > 30  → 10% discount  
qty ≤ 30  → no discount
Final price nikalna
final = total - discount
⚡ Important Concepts

✔ 15% = 0.15 (percentage ko decimal me convert karna)
✔ discount = total × rate
✔ discount = 0 by default (no discount case)
✔ Always check badi condition pehle (>50 first)

🧩 One-Line Logic (Exam Trick)
total = qty × 5
discount = (qty>50)?15% : (qty>30)?10% : 0%
final = total - discount
🔥 Example (Quick Recall)
qty = 60
total = 300
discount = 15% → 45
final = 255 */







/*%.2f ka meaning kya hai?

👉 Ye printf format specifier hai (C language me)

printf("%.2f", value);
✅ Simple Meaning:
%.2f  → decimal ke baad 2 digits show karo
🧠 Breakdown:
Part	Meaning
%	format start
.2	2 digits after decimal
f	float value
🔥 Example
float x = 12.34567;
printf("%.2f", x);

👉 Output:

12.35

✔ Automatically round off bhi karta hai

⚡ Aur Examples
Format	Output
%.1f	12.3
%.2f	12.35
%.3f	12.346
🎯 Real Use (Tumhare Question me)
printf("Total = %.2f", total);

👉 Output clean aayega:

Total = 300.00

✔ Professional / exam-friendly output

🧩 Short Trick
%.nf → n = decimal ke baad kitne digits chahiye*/