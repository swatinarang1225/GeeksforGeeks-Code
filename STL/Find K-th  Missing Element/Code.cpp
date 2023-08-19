//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int MissingNumber(int a[], int b[], int k, int n, int m)
    {
        // Complete the function
        
        if(k>n){
            return -1;
        }
       map<int,int> mp;
       for(int i = 0; i<m;i++){
           if(mp.find(b[i]) == mp.end()){
               int count = 1;
               mp.insert({b[i],count});
           }
           else{
               mp[b[i]]++;
           }
       }
       
       int j = 0;
       int out;
       int i =0;
       while(i<k && j<n){
           if(mp.find(a[j]) == mp.end()){
               out = a[j];
               i++;
           }
           else{
               if(j == n-1){
                   return -1;
               }
           }
           j++;
       }
      if(i == k){
       return out;}
       else{return -1;}
       
        
        
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.MissingNumber(a, b, k, n, m)<<endl;

    }
    return 0;
}

// } Driver Code Ends
