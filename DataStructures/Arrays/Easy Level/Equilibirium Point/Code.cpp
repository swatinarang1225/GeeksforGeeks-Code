//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int sum(long long a[],int i,int j){
        int sum = 0;
        for(int k = i; k <=j; k++){
            sum+= a[k];
        }
        return sum;
    }
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
            if(n==1){
                return a[0];
            }
        
            int sum1 = 0;
            int sum2 = sum(a,1,n-1);
            for(int i = 1; i<n;i++){
                sum1 = sum1 +a[i-1];
                sum2 = sum2 - a[i];
                if(sum1==sum2){
                    return i+1;
                }
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends
