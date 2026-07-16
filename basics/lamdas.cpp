#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v{2,3,4,5,11};
    for_each(v.begin(),v.end(),[](int x){
        cout << x << " ";
    });

    // pattern is [] () {}, here for each loop is used
    return 0;
}