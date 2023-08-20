//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends


class Solution{
    public:
    int emptyLanes(pair<int, int> a[], int n, int tracks) {
        // Your code goes here
        sort(a,a+n);
        int start = a[0].first;
        int end = a[0].second;
        int count = (end-start)+1;
        int j=1;
        while(j<n){
            if(a[j].first>end){
                start = a[j].first;
            }
            else if(a[j].first== end){
                start = a[j].first+1;
            }
            else{
                start = end+1;
            }
            if(a[j].second > end){
                end = a[j].second;
                count += (end-start)+1;
            }
            
            j++;
            
        }
        
        return tracks-count;
    }
};

//{ Driver Code Starts.
int main() {
    ll t;
    cin >> t;
    while (t--) {
        int n, l1, l2, i, tracks;
        cin >> n >> tracks;
        pair<int, int> a[n];
        for (i = 0; i < n; i++) {
            cin >> l1 >> l2;
            a[i].first = l1;
            a[i].second = l2;
        }
        Solution ob;
        cout << ob.emptyLanes(a, n, tracks) << endl;
    }
    return 0;
}
// } Driver Code Ends
