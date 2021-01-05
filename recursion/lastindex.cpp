#include <iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){

    if(idx==n)
        return -1;
    
    int temp=lastIndex(arr,idx+1,x,n);

    if(temp==-1 && arr[idx]==x)
        return idx;

    return temp;

}

int main(){
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = lastIndex(arr, 0, d, n);
    cout << p << endl;
}