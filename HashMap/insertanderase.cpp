#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    map<int,string>M={{1,"ABC"},{5,"DEF"},{3,"GHI"}};
    M.insert(make_pair(4,"JKL")); //insert a pair
    M.erase(5); //for erasing a pair
    for(auto elem:M){
        cout<<elem.first<<" ";
        cout<<elem.second<<endl;
    }
}
