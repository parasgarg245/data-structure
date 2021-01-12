#include <iostream>
using namespace std;

void printSS(string ques, string ans){
   
	if(ques.length()==0){
		cout<<ans<<endl;
		return;
	}

   printSS(ques.substr(1),ans+ques[0]);
   printSS(ques.substr(1),ans);

   return ;
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}