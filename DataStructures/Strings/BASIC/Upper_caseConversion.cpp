#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;

string transform(string s)
{
    // code here
    for (int i = 0; i < s.length(); i++){
        if (i == 0){
            s[0] = toupper(s[0]); 
        }
        else{
            if (s[i] == ' '){
                s[i+1] = toupper(s[i+1]);
                
            }
            else{
                continue;
            }
        }
    }
    return s;
}
