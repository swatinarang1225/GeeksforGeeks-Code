//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        map<int,int> mp;
        vector<int> v1;
        for(int i =0;i<n;i++){
            mp[arr[i]]++;
            
        }
        map<int,int>::iterator it;
        for(it = mp.begin();it!=mp.end();it++){
            if(it->second > 1){
                v1.push_back(it->first);
            }
        }
        if(v1.size()== 0){
            v1.push_back(-1);
        }
        else{
            sort(v1.begin(),v1.end());
            return v1;
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
