#include<bits/stdc++.h>
using namespace std;

void printincreasing(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	printdecreasing(n-1);
	cout<<n<<endl;
	
}


int main(){

	int n;
	cin>>n;

	printincreasing(n);
}