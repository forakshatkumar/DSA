#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,item;
	cin>>n;
	cin>>item;
    int arr[50];
    for (int i=0; i <= n ; i++){
        cin>>arr[i];
    }
    int k = 1;
    int loc = 0;
    while ( loc == 0 && k <= n ){
        if (arr[k] == item){
            loc = k;
        }
        k++;
    }
    if(loc == 0){
        cout<<"Not found";
    }
    else{
        cout<<"Found at = "<< loc + 1;
    }
    return 0;
}
