#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){

	int t;
	cin>>t;

	while(t--){
		ll n,m;
		cin>>n>>m;

		
		ll sum1=0 ,sum2=0;

		priority_queue<int>maxh;
		priority_queue<int,vector<int>,greater<int>>minh;

		for(ll i=0;i<n;i++){
			int temp;
			cin>>temp;
			minh.push(temp);
			sum1+=temp;

		}	
		for(ll i=0;i<m;i++){
			int temp;
			cin>>temp;
			maxh.push(temp);
			sum2+=temp;
		}


		ll ans=0;

		while(sum1<=sum2){

			int a=minh.top();
			int b=maxh.top();

			if(a<b){

				sum1=sum1-a+b;
				sum2=sum2-b+a;

				minh.pop();
				maxh.pop();

				minh.push(b);
				maxh.push(a);

				ans++;
			}else{
				break;
			}


		}

		

		if(sum1>sum2)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;



	}
}