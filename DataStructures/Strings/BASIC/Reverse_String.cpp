#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
    
  //Your code here
  string t;
  for(int i = str.length()-1; i >=0; i--){
      t = t+str[i];
  }
  return t;
}
