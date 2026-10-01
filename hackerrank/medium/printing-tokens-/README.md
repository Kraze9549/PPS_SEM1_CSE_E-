# Pointers in C

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a sentence, $s$, print each word of the sentence in a new line.

**Input Format**

The first and only line contains a sentence, $s$.

**Constraints**

$ 1 \le len(s) \le 1000$  

**Output Format**

Print each word of the sentence in a new line.

## Solution

**Language:** C  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-01T16:59:28.940Z  

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

[View on HackerRank](https://www.hackerrank.com/challenges/printing-tokens-/problem)