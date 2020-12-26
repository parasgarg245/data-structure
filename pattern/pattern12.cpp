#include<bits/stdc++.h>
using namespace std;

int main(){


	int n;
	cin>>n;

	int ntimes=1;
	int a=0 ,b=1;

	for(int i=1;i<=n;i++){

	


		for(int j=1;j<=ntimes;j++){
			cout<<a<<"\t"; 
			
			int temp=a;
			a=a+b;
			b=temp;
		}


	

		cout<<endl;
		ntimes++;
	
		
	}
}