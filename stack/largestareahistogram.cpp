#include<bits/stdc++.h>
using namespace std;


vector<int>nsl(vector<int>arr){
	vector<int>ans;
	stack<int>st;
	st.push(-1);

	for(int i=0;i<arr.size();i++){
		while(st.top()!=-1 && arr[st.top()]>=arr[i] ){
			st.pop();
		}
		ans.push_back(st.top());
		st.push(i);
	}
	return ans;
}

vector<int>nsr(vector<int>arr){
	vector<int>ans;
	stack<int>st;
	st.push(arr.size());

	for(int i=arr.size()-1;i>=0;i--){

		while(st.top()!=arr.size() && arr[st.top()]>=arr[i]){
			st.pop();
		}
		ans.push_back(st.top());
		st.push(i);
	}
	return ans;
}

int maxhistogramrectange(vector<int>height){

	vector<int>left=nsl(height);
	vector<int>right=nsr(height);


	for(int i=0;i<left.size();i++){
		cout<<left[i]<<" ";
	}
	cout<<endl;

	for(int i=0;i<right.size();i++){
		cout<<right[i]<<" ";
	}
	cout<<endl;

	int ans=INT_MIN;
	for(int i=0;i<height.size();i++){

		int width=abs(right[i]-left[i]-1);
		int area=width*height[i];

		ans=max(ans,area);
		


	}
	return ans;
}

	







int main(){


	int n;
	cin>>n;

	vector<int>height;

	for(int i=0;i<n;i++){
		int temp;
		cin>>temp;
		height.push_back(temp);
	}

	cout<<maxhistogramrectange(height);
}