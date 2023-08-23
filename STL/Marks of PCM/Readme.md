## PROBLEM STATEMENT
### You are provided with marks of N students in Physics, Chemistry and Maths. Perform the following 3 operations: 

#### Sort the students in Ascending order of their Physics marks.
#### Once this is done, sort the students having same marks in Physics in the descending order of their Chemistry marks.
#### Once this is also done, sort the students having same marks in Physics and Chemistry in the ascending order of their Maths marks.

TASK:

You don't need to read input or print anything. Your task is to complete the function customSort() which takes  phy[],  chem[],  math[]  and an integer N denoting the marks and the number of students. The function sorts the marks in the described order and the final changes should be made in the given arrays only.


Expected Time Complexity: O(NLogN).
Expected Auxiliary Space: O(N).


Constraints:
1 <= N <= 10000
