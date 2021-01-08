#include<bits/stdc++.h>
using namespace std;



vector<string>getmaze(int i,int j,int n,int m){


	if(i==n-1 && j==m-1){
		vector<string>temp;
		temp.push_back("");
		return temp;

	}else if(i>=n || j>=m){
		vector<string>temp;
		return temp;
	}




	vector<string>downPath = getmaze(i+1,j,n,m);
	vector<string>rightPath=getmaze(i,j+1,n,m);

	vector<string>ans;

	for(int i =0;i<rightPath.size();i++){
		ans.push_back('h'+rightPath[i]);
	}

	for(int i=0;i<downPath.size();i++){

			ans.push_back('v'+downPath[i]);
	}

	
	return ans;

}



int main(){


	int n,m;

	cin>>n>>m;

	vector<string>ans=getmaze(0,0,n,m);
	 int cnt = 0;

    cout << '[';
    for (string str: ans) {
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}