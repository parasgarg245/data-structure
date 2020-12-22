#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    string ans="";
    ans+=s[0];
    for(int i=1;i<s.length();i++){
        int count =0;
        count=s[i]-s[i-1];
        ans+=to_string(count);
        ans+=s[i];
    }
    cout<<ans;
}