#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string s){
    
    int low =0;
    int high=s.length()-1;
    
    while(low<=high){
        if(s[low]!=s[high])
            return false;
        low++;
        high--;
    }
    return true;
}

int main()
{
    string s;

    cin >> s;
    
    for(int i=0;i<s.length();i++){
        string temp="";
        for(int j=i;j<s.length();j++){
            temp+=s[j];
            if(checkpalindrome(temp)){
                cout<<temp<<endl;
            }
        }
    
    }
   

}