#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

	// const unsigned int M = 1000000007;
	ll t;
	cin>>t;
	while(t--){

		ll n,k,x,y;
		cin>>n>>k>>x>>y;

		
		if(x==y){

			cout<<n<<" "<<n<<endl;

		}else{ 

		vector<pair<ll,ll>>v;

		if(x>y){

			v.push_back({n,n-x+y});
			v.push_back({n-x+y,n});
			v.push_back({0,x-y});
			v.push_back({x-y,0});


		}else if(x<y){


			v.push_back({x+n-y,n});
			v.push_back({n,x+n-y});
			v.push_back({y-x,0});
			v.push_back({0,y-x});


		}

		
		k-=1;
		k=k%4;

		cout<<v[k].first<<" "<<v[k].second<<endl;


		

	}






	}


	
}