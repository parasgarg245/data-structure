#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)	cin>>arr[i];

	int d;
	cin>>d;

	int firstIndex=-1 ,lastIndex=-1;

	//// for firstindex

	int low=0, high=n-1;

	while(low<=high){

		int mid=low +(high-low)/2;

		if(arr[mid]==d){
			firstIndex=mid;
			high=mid-1;

		}else if(arr[mid]>d){
			high=mid-1;

		}else{
			low=mid+1;
		}

	}


///////////////////////////////////////////////////

	///lastindex 
	low=0 ,high=n-1;

	while(low<=high){

		int mid=low +(high-low)/2;

		if(arr[mid]==d){
			lastIndex=mid;
			low=mid+1;

		}else if(arr[mid]>d){
			high=mid-1;

		}else{
			low=mid+1;
		}

	}


	cout<<firstIndex<<endl<<lastIndex;
}