#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    
        bool Vowel( char c){
            if (c=='a' || c=='A' || c=='e' || 
            c=='E' || c=='i' || c=='I' || 
            c=='o' || c=='O' || c=='u' || 
            c=='U'){
                return true;
            }
            else{
                return false;
            }
        }
        string modify (string s)
        {
            //code here.
            int i = 0;
            int j = s.length() - 1;
            while(i < j){
                if (Vowel(s[i]) == false){
                    i = i+1;
                    continue;
                }
                if (Vowel(s[j]) == false){
                    j = j-1;
                    continue;
                }
                swap(s[i],s[j]);
                i++;
                j--;
                
            
            }
            return s;
            
        
    }
};



int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
