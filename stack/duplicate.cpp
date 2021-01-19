#include<bits/stdc++.h>
using namespace std;


bool checkDuplicateBracket(string str){

	stack<char>st;


	for(int i=0;i<str.length();i++){

		if(str[i]!=')'){
			st.push(str[i]);

		}else{
			if(st.top()=='('){
				return true;
			}else{
				while(st.top()!='('){
					st.pop();
				}
				st.pop();
			}

		}
	}

	return false;

}





int main(){


	string s;

	getline(cin,s);

	if(checkDuplicateBracket(s)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}
	
	
}