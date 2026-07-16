#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> mp;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int key;
        string value;
        cin >> key >> value;
        mp[key] = value;
    }

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}