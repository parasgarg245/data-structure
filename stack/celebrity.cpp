

#include <bits/stdc++.h>
using namespace std;



void findCelebrity(vector<vector<int>>v){
    
    stack<int>st;
    
    for(int i=0;i<v.size();i++){
        st.push(i);
    }
    
    while(st.size()!=1){
        if(st.size()>=2){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(v[a][b]==0){
                st.push(a);
            }else{
                st.push(b);
            }
        }
        
    }
    int value=st.top();
    int flag=0;
    for(int i=0;i<v.size();i++){
        if(v[value][i]!=0){
            flag=1;
            break;
        }
        if(i!=value && v[i][value]!=1){
            flag=1;
            break;
        }
    }
    if(flag==0)
    cout<<value<<" "<<value<<endl;
    else
        cout<<"none"<<endl;
    
}

int main() {
	
	int n;
	cin>>n;
	
	vector<vector<int>>v;
	for(int i=0;i<n;i++){
	    vector<int>temp;
	    
	    for(int j=0;j<n;j++){
	        int value;
	        cin>>value;
	        
	        temp.push_back(value);
	        
	    }
	    v.push_back(temp);
	    
	}
	
	findCelebrity(v);
	
	
	return 0;
}
