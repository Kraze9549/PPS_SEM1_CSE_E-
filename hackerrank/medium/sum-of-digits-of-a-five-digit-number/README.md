# Sum of Digits of a Five Digit Number

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

**Objective** 

The modulo operator, `%`, returns the remainder of a division.  For example, `4 % 3 = 1` and `12 % 10 = 2`.  The ordinary division operator, `/`, returns a truncated integer value when performed on integers.  For example, `5 / 3 = 1`.  To get the last digit of a number in base 10, use $10$ as the modulo divisor.  

**Task**

Given a five digit integer, print the sum of its digits.  


**Input Format**

The input contains a single five digit number, $n$.

**Constraints**

$ 10000 \le n \le 99999$  

**Output Format**

Print the sum of the digits of the five digit number.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-04T07:49:32.443Z  

```c
#include <stdio.h>
int main()
{
	
    int n;
    scanf("%d",&n);
    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int c = n % 10;
    n = n / 10;
    int d = n % 10;
    n = n / 10;
    int e = n % 10;
    
    printf("%d",a + b + c + d + e);
    return 0;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem)