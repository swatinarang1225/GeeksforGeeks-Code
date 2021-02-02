#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
       int RedOrGreen(int N,string S) {
           int count_r = 0;
           int count_g = 0;
           for (int i = 0; i < N; i++){
               if (S[i] == 'R'){
                   count_r = count_r + 1;
               }
               else{
                   count_g = count_g + 1;
               }
           }
           if (count_r > count_g){
               return count_g;
           }
           else{
               return count_r;
           }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        string S;
        cin >> S;
        Solution ob;
        cout << ob.RedOrGreen(N,S) << endl;
    }
    return 0;
}  
