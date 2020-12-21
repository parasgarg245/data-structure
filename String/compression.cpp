#include<bits/stdc++.h>
using namespace std;

string compression1(string s){
    string ans="";
    ans+=s[0];
    for(int i=1;i<s.length();i++){
        if(s[i-1]!=s[i]){
            ans+=s[i];
        }
        
    }
    return ans;
}

string compression2(string s){
    string ans="";
    ans+=s[0];
    int count =1;
    for(int i=1;i<s.length();i++){
        if(s[i-1]!=s[i]){
            if(count>1){
                ans+=to_string(count);
                
            }
            count=0;
            ans+=s[i];
        }
        count++;
    }
    if (count > 1)
    {
        ans += to_string(count);
    }
    return ans;
}


int main(){

    string s;
    cin>>s;
    
    string ans1="", ans2="";

    int j =0;
    // for(int i=0;i<s.length();i=j){
    //     int count=0;
    //     j=i;
    //     while (j < s.length() && s[j] == s[i])
    //     {
    //         count++;
    //         j++;
    //     }

    //         ans1+=s[i];
    //         ans2+=s[i];
    //         if(count!=1)
    //             ans2+=to_string(count);
        
    // }
    
    // cout<<ans1<<endl<<ans2;
    
    cout<<compression1(s)<<endl<<compression2(s);
}