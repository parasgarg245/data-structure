#include<bits/stdc++.h>
using namespace std;

vector<string> gss(string s){

    if(s.length()==0){
        vector<string>temp;
        temp.push_back("");
        return temp;
    }
   
   vector<string> temp=gss(s.substr(1));

   vector<string>newarray;

   for(int i=0;i<temp.size();i++){
        newarray.push_back(temp[i]);
   }

   for(int i=0;i<temp.size();i++){
        newarray.push_back(s[0]+temp[i]);
   }

   return newarray;
    
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}