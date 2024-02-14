# Data structure 
+ techniques of organising data  
+ aim for efficient data access

---

## Types of DS
+ Linear
    + Arrays
    + Stacks
    + Queues
+ Non-linear 
    + Graphs
    + Trees

---

## performance
Asymptotic analysis

---

## Advantages 
+ Efficiency of program
+ Reusability: Reuse DS anywhere in the program
+ Abstraction: Superset of blackboxing

---

## Stack in Recursion of factorial

```

#include<stdio.h>
long int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}

```

---

## Stack in Recursion of factorial 

+ Call and calculate
+ Leave result in stack (PUSH)
+ `5*multiplyNumbers(5-1)` 
> multiplyNumbers(4) = unknown
+ Once `return 1`, calculate all multiplyNumbers(n-1) values
+ Unwind each stack and remove (POP) 

---



