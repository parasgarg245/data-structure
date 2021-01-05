#include<bits/stdc++.h>
using namespace std;

int  main(){

	char arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

		string s;
		cin>>s;

		int low=0,high=15;
		
		for(int i=0;i<n;i++){

			int mid=low+(high-low)/2;

			int val=s[i]-'0';

			if(val){
				low=mid+1;
			}else{
				high=mid;
			}

			if(i%4==3 && low==high ){
				cout<<arr[low];
				low=0;
				high=15;
			}


				

				
		}
		cout<<endl;
	}
}