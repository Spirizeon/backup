# Stacks
+ Follows LIFO order
+ Operation: PUSH -> add an element to top
+ Operation: POP -> remove an element from pop
+ Check: isEmpty/isFull -> check if stack capacity is empty or full

### Stack implementations
+ Arrays (fixed sized lists)
+ Linkedin lists (self-referential pointers and structs)


### Stack blueprint
+ isFull function
```c 
#include <stdio.h> 
void isFull(int * array){
    //this function checks if capacity is full
        if(array[2] == 0){
            return 0; //array still has space
        }
        else{
            return 1; //array is full
        }
    }
}

```
+ isEmpty function

```c
void isEmpty(int * array){
    //this function checks if capacity is full
        if(array[2] == 0){
            return 0; //array still has space
        }
        else{
            return 1; //array is full
        }
    }
}

```

+ push function

```c
void push(int * array){
    if(isFull(array) == 0){
    //array needs to be not empty
        int num;
        printf("enter element: ");
        scanf("%d\n",&num);

        //element entering...

        if(array[2]==0){
            array[i] == num;
            //replace null element with new element
            printf("element pushed!");
        }
    }
    else{
            //show error message
            printf("array is full!")
        }


}

```
+ pop function

```

void pop(int * array){
    if(isFull(array)==0){

        for(int i=0;i<=2;i++){
            if(array[i] == 0){
                //search for null element
                //replace non null element
                array[i-1] = 0;             
                printf("element has been popped!")
            }
        }
    }
}
```
+ main function

```c
int main(){
    int array[4];
    push(array);
    pop(array);
    return 0;
}


```

### Complexity
+ All stack operations are O(1)

### Applications of stack
+ Matching parenthesis (for compiler)
```
if ((Expression == ")" && Stack[top] == "("))
```
+ evaluation of arithmentic


### Arithmetics
+ A stack is a very effective data structure for evaluating arithmetic expressions in programming languages
#### Rules
in A+B/C

+ Operators are pushed to stack
+ Equal precedence can't be together, you need to empty out into the result
+ Higher precendence can be stacked

way of answering: 3 column table (expression, stack status, postfix output)
[SOMETHING](https://i.imgur.com/a2ZBUlT.png)
> brackets don't have a priority, they are simply pushed to the stack

> Postfix conversion is to make the expression simpler

### Prefix 
---
Go from right instead of left in postfix


### Types of operations on queue
enque (add from rear)
deque (remove from front)

