#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            int temp=(int)s[i];
            temp=temp-32;
            s[i]=(char)temp;
        }else{
            int temp = (int)s[i];
            temp = temp + 32;
            s[i] = (char)temp;
        }
    }
    cout<<s;
}