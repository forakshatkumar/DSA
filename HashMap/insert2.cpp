#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    map<int,string>M={{1,"ABC"},{5,"DEF"},{3,"GHI"}};
    M[1] = "DEF"; //insert a pair
    for(auto elem:M){
        cout<<elem.first<<" ";
        cout<<elem.second<<endl;
    }
}
