#include<bits/stdc++.h>
using namespace std;

void print_inc_dec(int n){
	if(n==1){
		cout<<1<<endl;
		cout<<1<<endl;
		return;
	}
	cout<<n<<endl;
	print_inc_dec(n-1);
	cout<<n<<endl;
	
	
}


int main(){

	int n;
	cin>>n;

	print_inc_dec(n);
}