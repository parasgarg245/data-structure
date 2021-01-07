#include<bits/stdc++.h>
using namespace std;

int powerlinear(int n,int x){
	if(x==1){
		return n;
	}else if(x==0){
	    return 1;
	}

	return n*powerlinear(n,x-1);
}

int main(){

	int n,x;
	cin>>n>>x;

	cout<<powerlinear(n,x);
}