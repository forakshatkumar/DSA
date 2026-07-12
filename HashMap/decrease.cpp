#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int A[10] = {2,4,6,8,3,6,1,5,7,9};
    map<int,int,greater<int>>m; //decresing order print
    for(int i:A){
        m[i] += 1; 
    }
    for(auto e:m){
        cout<<e.first<<" "<<e.second<<endl;
    }
    return 0;
}
