#include<bits/stdc++.h>
using namespace std;

void allindex(int arr[],int x,int idx,int n){
	if(idx==n){
		cout<<" ";
		return ;
	}
	if(arr[idx]==x){
		cout<<idx<<endl;
	}
	allindex(arr,x,idx+1,n);

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

    allindex(arr, x, 0,n);
}