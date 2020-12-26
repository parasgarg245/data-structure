#include<bits/stdc++.h>
using namespace std;

int main(){

	int n;
	cin>>n;

	int value=1;
	int ntimes=0;
	for(int i=0;i<n;i++){
		int value=1;
		cout<<value<<"\t";
		for(int j=1;j<=ntimes;j++){

			value=((i-j+1))*value/j;
			cout<<value<<"\t";
		}
		cout<<endl;
		ntimes++;
	}
}