#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int binarysearch(int arr[], int n, int k){
        int index = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] == k){
                index = i;
            }
            else {
                continue;
            }
        }
        if (index == 0 ){
            return -1;
        }
        else{
            return index ;
        }
    }
};

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

