#include<bits/stdc++.h>
using namespace std;


vector<string>printsubset(int arr[],int i,int n){


if(i==n-1){

	vector<string>temp;
	temp.push_back("");
	return temp;

}


vector<string>temp=printsubset(arr,i+1,n);

int size=temp.size();


for(int j=0;j<size;j++){
	 string my=to_string(arr[i]);
	temp.push_back(my+temp[j]);
}

return temp;

}



int main(){

	int arr[]={1,2,3};

	vector<string>v=printsubset(arr,0,3);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<endl;
	}
}