#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;

	int ntimes=1;
	int count=1;

	for(int i=1;i<=n;i++){

	


		for(int j=1;j<=ntimes;j++){
			cout<<count<<"\t"; 
			count++;
		}


	

		cout<<endl;
		ntimes++;
	
		
	}
}