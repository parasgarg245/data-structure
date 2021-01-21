	#include<bits/stdc++.h>
using namespace std;

int ways(int& coin ,int *arr,int n ){
	if(coin==0){
		return 1;
	}
	if(coin<=0){
		return 0;
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		if(arr[i]<coin){
			int temp=coin;
       
     	 ans+=ways(coin-arr[i],arr,n);

		}
	}
	return ans;

}





int main(){
	int t;cin>>t;
	while(t>0){
		int coin ;
	cin>>coin;
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<ways(coin,arr,n)<<endl;
	t--;
}
	return 0;
}