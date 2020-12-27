#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;
	int nspace=n/2;
	
	int ntimes=1;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=nspace && i!=n/2+1;j++)
			cout<<"\t";


		for(int j=1;j<=n/2 && i==n/2+1;j++)
			cout<<"*\t";

		for(int j=1;j<=ntimes;j++){
			cout<<"*\t";
		}
		
		cout<<endl;
		if(i<=n/2){
			ntimes++;
		}else{
			ntimes--;
		}
		
	}

}