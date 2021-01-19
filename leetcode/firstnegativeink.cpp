#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    int k;
	    cin>>k;
	    
	    int start=0 ,end=0;
	    
	    queue<int>q;
	    
	  
	    
	     while(end-start+1<k){
	        if(arr[end]<0){
	            q.push(arr[end]);
	        }
	        end++;
	    }
	    if(arr[end]<0){
	        q.push(arr[end]);
	    }
	     while(end<n){
	    if(end-start+1==k){
	       
	        if(q.empty()){
	            cout<<0<<" ";
	        }
	        
	        else{
	            cout<<q.front()<<" ";
	        }
	          end++;
	            if(arr[end]<0){
	                q.push(arr[end]);
	            }
	            
	            if(arr[start]<0){
	                q.pop();
	            }
	            start++;
	        
	    }
	    }
	    cout<<endl;
	}
	
	return 0;
}