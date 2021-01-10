#include<bits/stdc++.h>
using namespace std;

int  main(){

	int t;
	cin>>t;

	while(t--){

		int n,k;
		cin>>n>>k;

		priority_queue<int>maxh;

		for(int i=0;i<n;i++){
			int temp;
			cin>>temp;
			maxh.push(temp);
		}

		int tower=0;
		int ans=0;

		int temp=k;

		while(!maxh.empty()){

			int a=maxh.top();

			temp-=a;

			if(temp<=0){
				tower++;
				
				temp=k;
			}
			ans++;
			if(tower==2){
				break;

			}
			
			maxh.pop();

		}

		if(tower!=2){
			cout<<-1<<endl;
		}else{
			cout<<ans<<endl;
		}


	}

}