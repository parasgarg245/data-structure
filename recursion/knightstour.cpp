#include<bits/stdc++.h>
using namespace std;


void displayboard(vector<vector<int>>&v){

	for(int i=0;i<v.size();i++){
		for(int j=0;j<v[i].size();j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


void pirntknighttour(vector<vector<int>>&v,int row,int col,int i,int val){
    
    if(row>=v.size() || col>=v[0].size() || row<0 || col<0 || v[row][col]!=0){
		return;
	}
	if(i==val*val){
	    v[row][col]=i;
		displayboard(v);
		v[row][col]=0;
		return;
	}




	v[row][col]=i;
	
	pirntknighttour(v,row-2,col+1,i+1,val);
	pirntknighttour(v,row-1,col+2,i+1,val);
	pirntknighttour(v,row+1,col+2,i+1,val);
	pirntknighttour(v,row+2,col+1,i+1,val);
	pirntknighttour(v,row+2,col-1,i+1,val);
	pirntknighttour(v,row+1,col-2,i+1,val);
	pirntknighttour(v,row-1,col-2,i+1,val);
	pirntknighttour(v,row-2,col-1,i+1,val);
	v[row][col]=0;




}



int main(){

	int val;
	cin>>val;

	int row,col;
	cin>>row>>col;

	vector<vector<int>>v;
	vector<vector<bool>>visted;

	for(int i=0;i<val;i++){
		vector<int>temp;
		for(int j=0;j<val;j++){
			temp.push_back(0);
		}
		v.push_back(temp);
	}


 

	pirntknighttour(v,row,col,1,val);

	




}