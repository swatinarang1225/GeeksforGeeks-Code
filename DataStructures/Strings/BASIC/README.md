## This folder contains all the basic level problems related to Strings with the important points to remember w.r.t C++.
# Below are some basic facts:
  1. There are mainly 2 logics to convert the Upper case String to Lower case and Vice-versa.
    a) Use the difference between the ASCII values of upper case letter and lower case letter.
    b) you can use in built function toupper() and tolower().
    
  2. For Concatenation of the String we can use '+' operator between 2 strings or can use the inbuilt function STRCAT(s1,s2).
  
  3. There are many different ways to reverse a String:
    a) Use inbuilt function reverse().
    b) Using Swapping characters.
    c) Reverse by Copying string from Right to Left
    d) Can copy string in new string and replace the value of the old string.
    
  4. There are inbuilt functions;
     a) isdigit(s1) : this returns true if s1 is digit.
     b) isalpha(s1) : this return true if s1 is an alphabet.
   
  5. The best way to  reverse the vowels or consonants in a particular string is :
     a) Take 2 pointers, one for starting of the string and another for end of the string.
     b) check if element is vowel from both ends.
     c) If not vowel, then either  increase the pointer from start or decrease the pointer from the end accordingly.
     d) Do swapping if both are vowels.
     
     
 
