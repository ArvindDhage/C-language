#include<stdio.h>
#include<float.h>
#include<limits.h>
int main(){
    printf("float  \t %zu \t %%f \t %e to %e \n ",sizeof(float),FLT_MIN,FLT_MAX);
    printf("double  \t %zu \t  %%g \t %e to %e \n ",sizeof(double),DBL_MAX ,DBL_MIN);
    printf("long  \t %zu \t %%e \t %e to %e \n",sizeof(long),LONG_MAX,LONG_MAX);
    printf("long double \t %zu \t %%E \t %e to %e \n ",sizeof(long double),LDBL_MAX,LDBL_MIN);
}

/*# **Experiment: Study of Data Types, Size, Range, and Format Specifiers in C**

---

## **Aim**

To write a C program to display the **size, range, and format specifiers** of different data types such as float, double, long int, and long double.

---

## **Theory**

In C programming, different data types are used to store different kinds of values. Each data type has:

* **Size** → Amount of memory it occupies (in bytes)
* **Range** → Minimum and maximum values it can store
* **Format Specifier** → Used in `printf()` to display values

### Header Files Used:

* `<stdio.h>` → for input/output functions like `printf()`
* `<float.h>` → for floating-point limits (FLT_MIN, FLT_MAX, etc.)
* `<limits.h>` → for integer limits (LONG_MIN, LONG_MAX, etc.)

---

## **Program**

```c
#include<stdio.h>
#include<float.h>
#include<limits.h>

int main(){

    printf("float \t\t %zu \t %%f \t %e to %e\n", sizeof(float), FLT_MIN, FLT_MAX);

    printf("double \t\t %zu \t %%lf \t %e to %e\n", sizeof(double), DBL_MIN, DBL_MAX);

    printf("long int \t %zu \t %%ld \t %ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);

    printf("long double \t %zu \t %%Lf \t %Le to %Le\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

    return 0;
}
```

---

## **Explanation**

* `sizeof()` → returns memory size of data type
* `FLT_MIN`, `FLT_MAX` → range of float
* `DBL_MIN`, `DBL_MAX` → range of double
* `LONG_MIN`, `LONG_MAX` → range of long int
* `LDBL_MIN`, `LDBL_MAX` → range of long double
* `%e` → scientific notation (used for float values)
* `%ld` → used for long integer
* `%Lf` → used for long double

---

## **Output (Sample)**

```
float          4    %f     1.17e-38 to 3.40e+38
double         8    %lf    2.22e-308 to 1.79e+308
long int       8    %ld    -9223372036854775808 to 9223372036854775807
long double    16   %Lf    very large range
```

---

## **Conclusion**

From this experiment, we learned:

* How to find the **size of different data types**
* How to display their **range using header files**
* Correct usage of **format specifiers**
* Difference between **integer and floating-point types**

---

## **Viva Questions**

1. What is the use of `sizeof()`?
2. Difference between `float` and `double`?
3. Why do we use `<float.h>` and `<limits.h>`?
4. What is `%e` format specifier?
5. What is the range of `int`?

---

## **Result**

The program was successfully executed and displayed the size, range, and format specifiers of different data types.

---

*/