#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int nspace=2*n-3;

	int val=1;
	int ntimes=1;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=ntimes;j++){
			cout<<val<<"\t";
			val++;
		}
		--val;
		for(int j=1;j<=nspace;j++){
			cout<<"\t";
		}
		if(i==n)
			--val;
		
		for(int j=(i==n?2:1);j<=ntimes;j++){

			cout<<val<<"\t";
			val--;
		}
		cout<<endl;
		ntimes++;
		nspace-=2;
		val++;
	}
}