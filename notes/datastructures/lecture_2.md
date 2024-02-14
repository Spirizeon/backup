# Absract data type
+ prototype of blue print (like struct or union)

### advantages
+ Encapsulation: make them compact packets
+ Abstraction: blackbox complication
+ Info hiding: 
    + control authorisation of access to data 
    + (public and private variables)

+ Approaches to represent an alogrithm
    + Visual approaches
        + FSM diagram 
        + UML diagram
        + Flowcharts
    + Alogrithm header
        + List parameters, 
        + describe preconditions
            + REQ for parameters
        + post conditions
            + Status of output, etc
 
        + Purpose
        + Condition
       
### Properties
+ Finiteness: terminate after a number of steps
+ Definiteness: Explain what each step done (comments)
+ Effectiveness: Must be able to be written down in pencil
    + Complexity 
+ IO: 

### Lab
Passing an array of structures/passing a structure (call by referece)

function:
```
function_name(struct template* structure_name){

}
```
main:
```
function_name(&<structure_name>);
function_name(<array_of_structure>);
```
