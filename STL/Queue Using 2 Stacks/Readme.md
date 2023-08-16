## PROBLEM STATEMENT
### Implement a Queue using 2 stacks s1 and s2 .
### A Query Q is of 2 Types
### (i) 1 x (a query of this type means  pushing 'x' into the queue)
### (ii) 2   (a query of this type means to pop element from queue and print the poped element)

### Note :- If there is no element return -1 as answer while popping

Task:
You are required to complete the two methods push which take one argument an integer 'x' to be pushed into the queue and pop which returns a integer poped out from other queue(-1 if the queue is empty). The printing is done automatically by the driver code.

Expected Time Complexity : O(1) for push() and O(N) for pop() or O(N) for push() and O(1) for pop()  
Expected Auxilliary Space : O(1).

Constraints:
1 <= Q <= 100
1 <= x <= 100
