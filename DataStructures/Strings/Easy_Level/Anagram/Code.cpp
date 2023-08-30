//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        map<int,int> mp1;
        map<int,int> mp2;
        
        for(int i = 0; i< a.length(); i++){
            if(mp1.find(a[i]) == mp1.end()){
                mp1[a[i]] = 1;
            }
            else{
                mp1[a[i]]++;
            }
        }
        
        for(int i = 0; i< b.length(); i++){
            if(mp2.find(b[i]) == mp2.end()){
                mp2[b[i]] = 1;
            }
            else{
                mp2[b[i]]++;
            }
        }
        
        if(mp1 == mp2){
            return true;
        }
        else{
            return false;
        }
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends
