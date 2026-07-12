#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,k;
    cin>>n>>k;
    int A[n],B[n];
    for(int i = 0; i < n; i++ ){
        cin>>A[i];
    }
    int C[k];
    for(int i = 0; i < k; i++){
        C[i] = 0;
    }
    for(int j = 0; j < n; j++){
        C[A[j]] = C[A[j]] + 1;
    }
    for(int i = 1; i < k; i++ ){
        C[i] = C[i] + C[i-1];
    }
    for(int j = n-1; j>=0; j--){
        B[C[A[j]]-1] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    for(int i = 0; i < n; i++ ){
        cout<<B[i] << " ";
    }
    return 0;
}
