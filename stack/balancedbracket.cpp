#include<bits/stdc++.h>
using namespace std;

bool checkBalanced(string str){

	stack<char>st;


	for(int i=0;i<str.length();i++){

		if(str[i]=='(' || str[i]=='[' || str[i]=='{' || str[i]==')' || str[i]==']' || str[i]=='}' ){

			if(str[i]=='(' || str[i]=='[' || str[i]=='{'){
				st.push(str[i]);
			}

			else if(st.size()>=1 && str[i]==')' && st.top()=='('){
				st.pop();
			}else if(st.size()>=1 && str[i]==']' && st.top()=='['){
				st.pop();
			}else if(st.size()>=1 && str[i]=='}' && st.top()=='{' ){
				st.pop();
			}else{
				return false;
			}
		}
	}

		if(st.size()!=0)
			return false;

		return true;
}





int main(){

	string s;
	getline(cin,s);

	if(checkBalanced(s)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
}