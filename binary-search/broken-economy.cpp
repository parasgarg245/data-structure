#include<bits/stdc++.h>
using namespace std;




int main(){

	int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++)	cin>>arr[i];

	int d;
	cin>>d;


	int low=0 ,high=n-1;
	int floor=arr[low] ,ceil=arr[high];

	while(low<=high){

		int mid=low+(high-low)/2;

		if(arr[mid]==d){

			ceil=arr[mid];
			floor=arr[mid];
			break;

		}else if(arr[mid]>d){
			high=mid-1;
			ceil=arr[mid];

		}else{
			low=mid+1;
			floor=arr[mid];
		}

	}

	cout<<ceil<<endl<<floor;

}
