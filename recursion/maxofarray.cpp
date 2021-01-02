#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    
    if(n-1==idx)
    	return arr[idx];


    int rem=max(arr,idx+1,n);

    return rem>arr[idx] ? rem : arr[idx];
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
