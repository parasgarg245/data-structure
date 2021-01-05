#include<bits/stdc++.h>
using namespace std;

string arr[10]={".;", "abc", "def" ,"ghi" ,"jkl" ,"mno","pqrs","tu","vwx","yz"};

vector<string>getkpc(string s){


	vector<string>temp=getkpc(s.substr(1));

	int index=s[0]-'0';

	string string_at_index=arr[index];

	vector<string>newvec;

	for(int i=0;i<string_at_index.length();i++){
		
		for(int j=0;j<temp.size();j++){

			arr
		}

	}



}


int main(){

	string s;
	cin>>s;

	vecot<string>ans=getkpc(s);

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