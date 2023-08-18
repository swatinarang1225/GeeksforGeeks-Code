## PROBLEM STATEMENT
### Given an array arr[] and a number k. The task is to delete k elements which are smaller than next element (i.e., we delete arr[i] if arr[i] < arr[i+1]) or become smaller than next because next element is deleted.


Task:
This is a function problem. The input is already taken care of by the driver code. You only need to complete the function deleteElement() that takes an array (arr), sizeOfArray (n), an integer K and return the array arr[] after deleting the k elements from the array if possible, else print the left array as it is. The driver code takes care of the printing.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

 

Constraints:
2 ≤ N ≤ 105
1 ≤ K < N 

