## PROBLEM STATEMENT
### Given two sorted arrays A and B of length L1 and L2, we can get a set of sums(add one element from the first and one from second). Find the Nth element in the set considered in sorted order.
### Note: Set of sums should have unique elements.


Task:
You do not need to read input or print anything. Your task is to complete the function nthItem() which takes L1, L2, A, B, and the value N as input parameters and returns the Nth value of the set. If N is greater than the size of the set then it returns -1.

Expected Time Complexity: O((L1*L2)*log(L1*L2))
Expected Auxiliary Space: O(L1*L2)
