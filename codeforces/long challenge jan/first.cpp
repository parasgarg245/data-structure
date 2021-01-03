#include<bits/stdc++.h>
using namespace std;


int main(){

	int t;
	cin>>t;

	while(t--){

		int n,k,d;

		cin>>n>>k>>d;

		int arr[n];

		int sum=0;

		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		for(int i=0;i<n;i++){
			sum+=arr[i];
		}

		
		int ans=sum/k;

		if(ans>d){
			cout<<d<<endl;
		}else
			cout<<ans<<endl;

	}
}