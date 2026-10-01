# Pointers in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective**

In this challenge, you will learn to implement the basic functionalities of pointers in C. A [pointer](http://en.wikipedia.org/wiki/Pointer_%28computer_programming%29) in C is a way to share a memory address among different contexts (primarily functions). They are primarily used whenever a function needs to modify the content of a variable that it does not own.  
<br>
In order to access the memory address of a variable, $val$, prepend it with $\&$ sign. For example, `&val` returns the memory address of $val$.  
<br>
This memory address is assigned to a pointer and can be shared among various functions. For example, $int^* p = \&val$ will assign the memory address of $val$ to pointer $p$. To access the content of the memory to which the pointer points, prepend it with a `*`. For example, `*p` will return the value reflected by $val$ and any modification to it will be reflected at the source ($val$).
```c
	void increment(int *v) {
        (*v)++; 
    }
      	int main() {
        int a;
        scanf("%d", &a);
        increment(&a);
        printf("%d", a);
    	return 0;      
    }     
```

**Task** 

Complete the function `void update(int *a,int *b)`.  It receives two integer pointers, int* a and int* b.  Set the value of $a$ to their sum, and $b$ to their absolute difference.  There is no return value, and no return statement is needed.  

- $a' = a+b$
- $b' = |a-b|$

**Input Format**

The input will contain two integers, $a$ and $b$, separated by a newline.

**Constraints**

 

**Output Format**

Modify the two values in place and the code stub main() will print their values.    

Note: Input/ouput will be automatically handled. You only have to complete the function described in the 'task' section.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T16:59:04.250Z  

```c
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,a_sum,b_diff;
    scanf("%d %d",&a,&b);
    int *p = &a;
    int *q = &b;
    a_sum = a + b;
    b_diff = abs(a - b);
    printf("%d\n",a_sum);
    printf("%d",b_diff);
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/pointer-in-c/problem)