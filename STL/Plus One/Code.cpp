//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> increment(vector<int> arr ,int N) {
        // code here
        int carry = 1;
        reverse(arr.begin(),arr.end());
        vector<int>::iterator itr1;
        for(itr1 = arr.begin(); itr1<arr.end(); itr1++){
            if(*itr1 == 9 && carry == 1){
                *itr1 = 0;
                 carry = 1;
            }
            else{
                *itr1 = *itr1+carry;
                carry = 0;
            }
                
        }
        if(carry == 1){
            arr.push_back(carry);
        }
        reverse(arr.begin(),arr.end());
           
    
        
        return arr;
        
        
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        char c;
        
        cin>>N;
        vector<int> arr(N);
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> res = ob.increment(arr,N);
        for(int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
