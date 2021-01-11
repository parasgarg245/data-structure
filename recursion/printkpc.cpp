#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    
    if(ques.length()==0){

    	cout<<asf<<endl;
    	return;
    }

   	int index=ques[0]-'0';

   	string string_at_index=codes[index];

   	for(int i=0;i<string_at_index.length();i++){

   		printKPC(ques.substr(1),asf+string_at_index[i]);
   	}
    
    return ;
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}