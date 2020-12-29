#include<bits/stdc++.h>
using namespace std;


int main(){

	int n;
	cin>>n;

	int nspace=n-2;

	int nspace2=n/2-1;
	int nspace3=-1;


	for(int i=1;i<=n;i++){
		cout<<"*\t";

		for(int j=1;j<=nspace && (i<=n/2 || i==n);j++)
			cout<<"\t";

		if(i==n/2+1){
			for(int j=1;j<=nspace2;j++)
				cout<<"\t";
			cout<<"*\t";
			for(int j=1;j<=nspace2;j++)
				cout<<"\t";
		}
		if(i>n/2+1 && i!=n){
			for(int j=1;j<=nspace2;j++)
				cout<<"\t";
			cout<<"*\t";
			for(int j=1;j<=nspace3;j++)
				cout<<"\t";
			cout<<"*\t";
			for(int j=1;j<=nspace2;j++)
				cout<<"\t";

		}

		cout<<"*\t";

		if(i>=n/2+1){
			nspace2--;
			nspace3+=2;
		}
		

		cout<<endl;

	}
}