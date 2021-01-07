#include<bits/stdc++.h>
using namespace std;

int powerlog(int n,int x){
	if(x==1){
		return n;
	}else if(x==0){
	    return 1;
	}

	if(x%2==0){
		int half=powerlog( n,x/2);
		return half*half;
	}
	
	int half=powerlog( n,x/2);
	return n*half*half;

}

int main(){

	int n,x;
	cin>>n>>x;

	cout<<powerlog(n,x);
}