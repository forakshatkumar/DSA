#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] > v[j]){
                int temp = v[j];
                v[j] = v[i];
                v[i] = temp; 
            }
        }
    }
    while(n--){
        cout<< v[n] << " ";
    }

    return 0;
}