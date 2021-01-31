#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str);

int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}

bool isBinary(string str)
{
   // Your code here
     int count_1 = 0;
   int count = 0;
   for (int i = 0; i < str.length(); i++){
       if (str[i] == '1' || str[i] == '0' ){
           count_1 = count_1 + 1;
       }
       else{
           count = count + 1;
       }
       
       
   }
   if (count > 0){
       return false;
   }
   else{
       return true;
   }
}
