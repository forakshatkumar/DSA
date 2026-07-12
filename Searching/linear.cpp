#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,item;
    cout<<"Enter array size : ";
	cin>>n;
	cin>>item;
    int arr[n];
    for (int i=0; i < n ; i++){
        cin>>arr[i];
    }
    int k = 0;
    int loc = -1;
    while ( loc == -1 && k <= n ){
        if (arr[k] == item){
            loc = k;
        }
        k++;
    }
    if(loc == -1){
        cout<<"Not found";
    }
    else{
        cout<<"Found at = "<< loc + 1;
    }
    return 0;
}
