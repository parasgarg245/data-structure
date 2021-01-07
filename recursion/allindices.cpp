#include<bits/stdc++.h>
using namespace std;

vector<int> allindex(int arr[],int x,int idx,int fsf,int n){
	if(idx==n){
		vector<int>temp(fsf);
		return temp ;
	}
	
	vector<int>temp;
	if(x==arr[idx]){
		temp=allindex(arr,x,idx+1,fsf+1,n);
		temp[fsf]=idx;
	}else{
		temp=allindex(arr,x,idx+1,fsf,n);
		return temp;
	}
	return temp;
}

int main(){
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;

    vector<int>v=allindex(arr, x, 0,0,n);
    if(v.size()==0)
    	cout<<" ";

    for(int i=0;i<v.size();i++){
    	cout<<v[i]<<endl;
    }
}