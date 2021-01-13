#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
   
   
   if(str.length()==0)
    {
        cout<<asf<<endl;
        return;
    }
      
   for(int i=0;i<str.length();i++)
   {
       char x=str[i];
       string temp=str;
       
       printPermutations(temp.erase(i,1),asf+x);
   }
    return;
   
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}