#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int nspace =n/2 ;
	int value=1;
	int ntimes=1;

	for(int i=1;i<=n;i++){

		for(int j=1;j<=nspace;j++)
				cout<<"\t";

		for(int j=0;j<=ntimes/2 ;j++){
			cout<<value<<'\t';
			value++;
		}
		--value;
		for(int j=1;j<=ntimes/2 ;j++){
			
			cout<<--value<<'\t';
		}
		
		cout<<endl;

		if(i<=n/2){
			nspace--;
			ntimes+=2;
			value++;
	
		}else{
			nspace++;
			ntimes-=2;
			value--;
		
		}
	}
	
}