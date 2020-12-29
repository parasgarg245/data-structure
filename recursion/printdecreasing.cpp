#include<bits/stdc++.h>
using namespace std;

void printdecreasing(int n){
	if(n==1){
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	printdecreasing(n-1);
}


int main(){

	int n;
	cin>>n;

	printdecreasing(n);
}