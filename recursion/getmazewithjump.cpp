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




	vector<string>downPath ;
	vector<string>rightPath;
	vector<string>diagonalPath;

	vector<string>ans;

	for(int k=1;k<=m-j;k++){
		rightPath = getmaze(i,j+k,n,m);

		string ch=to_string(k);

		for(int p =0;p<rightPath.size();p++){
			ans.push_back('h'+ch+rightPath[p]);
		}
	}

	for(int k=1;k<=n-i;k++){
		downPath = getmaze(i+k,j,n,m);
		string ch=to_string(k);
		for(int p=0;p<downPath.size();p++){

			ans.push_back('v'+ch+downPath[p]);
		}
	}



	


	

	for(int k=1;k<=m-j && k<=n-i;k++){
		diagonalPath = getmaze(i+k,j+k,n,m);
		string ch=to_string(k);
		for(int p =0;p<diagonalPath.size();p++){
			ans.push_back('d'+ch+diagonalPath[p]);
		}
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