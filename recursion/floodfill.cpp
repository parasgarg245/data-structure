#include<bits/stdc++.h>
using namespace std;


void floodfill(vector<vector<int>>v,int row,int col,string ans,vector<vector<bool>>visted){
    
    if(row==v.size()-1 && col==v[0].size()-1){
        cout<<ans<<endl;
        return;
    }
    visted[row][col]=true;
    if(row>=1 &&  v[row-1][col]==0 && visted[row-1][col]==false){
         
        floodfill(v,row-1,col,ans+'t',visted);
        
    }
      if(col>=1 &&v[row][col-1]==0 && visted[row][col-1]==false){
        
        floodfill(v,row,col-1,ans+'l',visted);
      
    }
     if(row<v.size()-1 &&v[row+1][col]==0 && visted[row+1][col]==false){
            
        floodfill(v,row+1,col,ans+'d',visted);
     
        
    } if(col<v[0].size()-1 &&v[row][col+1]==0&& visted[row][col+1]==false){
          
        floodfill(v,row,col+1,ans+'r',visted);
       
    }
    visted[row][col]=false;
}

int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>v;
    
    vector<vector<bool>>visted;
    
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int val;
            cin>>val;
            temp.push_back(val);
        }
        v.push_back(temp);
    }
    
     
    for(int i=0;i<n;i++){
        vector<bool>temp;
        for(int j=0;j<m;j++){
           
            temp.push_back(false);
        }
        visted.push_back(temp);
    }
    
    floodfill(v,0,0,"",visted);
}