#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int npsace=n/2;
	

	for(int i=1;i<=n;i++){
		if(i==1){
		for(int j=1;j<=npsace ;j++){
			cout<<"*\t";
		}

		cout<<"*\t";

		for(int j=1;j<=npsace-1 ;j++){
			cout<<"\t";
		}

		cout<<"*\t";

		}


		//////////////
		else if(i>1 && i<=n/2){
		for(int j=1;j<=npsace;j++)
			cout<<"\t";
		cout<<"*\t";

		for(int j=1;j<=npsace-1;j++)
			cout<<"\t";
		cout<<"*\t";
	}

	////////////

	else if(i==n/2+1){
		for(int j=1;j<=n;j++)
			cout<<"*\t";
	}

	else if(i>n/2+1 && i<n){
		cout<<"*\t";

		for(int j=1;j<=npsace-1;j++)
			cout<<"\t";
		cout<<"*\t";
	}
	///////////
	else{

		cout<<"*\t";

		for(int j=1;j<=npsace-1 ;j++){
			cout<<"\t";
		}

		for(int j=1;j<=npsace+1 ;j++){
			cout<<"*\t";
		}

	}


	cout<<endl;


	}
	
}