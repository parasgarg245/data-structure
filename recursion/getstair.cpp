#include<bits/stdc++.h>
using namespace std;


vector<string>getstairpath(int n){

	if(n==0){
		vector<string>temp;
		temp.push_back("");
		return temp;
	}
	

	vector<string>temp1;
	vector<string>temp2;
	vector<string>temp3;

	if(n>=1)
		temp1=getstairpath(n-1);
	if(n>=2)
		temp2=getstairpath(n-2);
	if(n>=3)
		temp3=getstairpath(n-3);

	vector<string>ans;

	for(int i=0;i<temp1.size();i++){
		ans.push_back("1"+temp1[i]);
	}
	for(int i=0;i<temp2.size();i++){
		ans.push_back("2"+temp2[i]);
	}
	for(int i=0;i<temp3.size();i++){
		ans.push_back("3"+temp3[i]);
	}

	return ans;
}


int main(){

	int n;
	cin>>n;
	vector<string>v=getstairpath(n);
	 int cnt = 0;

    cout << '[';
    for (string str: v) {
        if (cnt != v.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}