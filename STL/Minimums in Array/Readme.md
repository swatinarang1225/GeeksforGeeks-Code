## PROBLEM STATEMENT
### You are given two arrays A and B each containing N numbers. You need to choose exactly one number from A and exactly one number from B such that the index of the two chosen numbers is not same and the sum of the 2 chosen values is minimum. Formally, if you chose ith element from A whose value is x and jth element from B whose value is y, you need to minimize the value of (x+y) such that i is not equal to j.
#### Your objective is to find this minimum value.

#### NOTE: If not possible print "-1" without quotes.


Task:
You don't need to read input or print anything. Your task is to complete the function getMin() which takes the array A[], B[] and its size N as inputs and returns the required answer. If answer is not present, return -1.

Expected Time Complexity: O(N. Log(N))
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i], B[i] ≤ 105







