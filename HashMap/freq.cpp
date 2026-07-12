#include <bits/stdc++.h>
using namespace std;

int main() {
	int A[5] ={2, 4, 7, 4 ,11};
	map<int,int>m;
	for(int i:A){
	    m[i]+=1;
	}
	for(auto elem:m){
	    cout<<elem.first<<" "<<elem.second<<endl;
	}
}
