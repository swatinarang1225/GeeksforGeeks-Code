## PROBLEM STATEMENT
### A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

### Given a deque and Q queries. The task is to perform some operation on dequeue according to the queries as given below:
### 1. pb: query to push back the element x.
### 2. pf: query to push element x(given with query) to the front of the deque.
### 3. pp_b(): query to delete element from the back of the deque.
### 4. f: query to return a front element from the deque.


Task:
Your task is to complete the following functions:
push_back_pb(): Push back the given element and then driver code prints that element.
push_front_pf(): Push front the given element and then driver code prints that element.
pop_back_ppb(): Pop the back element (if exists) and then the driver code prints the size of the deque.
front_dq(): Return the front elements if it exists, else return -1. The driver code prints the return value.

Expected Time Complexity: O(1)
Expected Auxilliary Space: O(1)

