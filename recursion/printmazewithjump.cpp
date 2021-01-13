#include<iostream>
using namespace std;


    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {

    	if(sr==dr && sc==dc){
    		cout<<psf<<endl;
    		return;
    	}if(sr>dr || sc>dc){
    		return;
    	}
        

        for(int k=1;k<=dc-sc;k++){

        	string ch=to_string(k);

        	printMazePaths(sr,sc+k,dr,dc,psf+"h"+ch);


        }
        for(int k=1;k<=dr-sr;k++){
        	string ch=to_string(k);

        	printMazePaths(sr+k,sc,dr,dc,psf+"v"+ch);
        }
         for(int k=1;(k<=dr-sr) && (k<=dc-sc);k++){
        	string ch=to_string(k);

        	printMazePaths(sr+k,sc+k,dr,dc,psf+"d"+ch);
        }
        
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(0, 0, n - 1, m - 1, "");
    }