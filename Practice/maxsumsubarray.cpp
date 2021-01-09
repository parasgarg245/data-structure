#include<bits/stdc++.h>
using namespace std;


int maximumSumSubarray(int k, int arr[] , int n){
    
    int start=0 ,end=0;
    
    int sum=arr[end], mx=INT_MIN;
    
    while(end<=n-1){
        if(end-start+1 < k){
            end++;
            sum+=arr[end];
            mx=max(sum,mx);
            
        }
        else if(end-start+1==k){
            sum-=arr[start];
            start++;
            end++;
            if(end<=n-1)
            	sum+=arr[end];
            mx=max(sum,mx);
           
            
        }
    }
   

    return mx;

}


int main(){

	int n,k;
	cin>>n>>k;

	int arr[n];



	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	

	cout<<maximumSumSubarray(k,arr,n);


}