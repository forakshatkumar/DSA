#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    map < string, int > m;
    int n;
    cin >> n;
    for (int i = 1; i < n; i++) {
        string x;
        cin >> x;
        m[x]++;
    }
    string Daughter, Son;
    int minf = INT_MAX;
    int maxf = INT_MIN;
    for (auto name: m) {
        if (name.second < minf) {
            minf = name.second;
            Daughter = name.first;
        }

        if (name.second > maxf) {
            maxf = name.second;
            Son = name.first;
        }
    }
    cout << Daughter << " " << Son << endl;
}

// A person wants to name his new born daughter and son. He has got hold of a list of names according to his belief system.
// He wants to name his daughter by the name that appears least in his list of names and he wants to name his son by the name that appears most in the list. 
//In case of a tie he will pick the lexico-graphically smaller name. help that person find suitable names for his daughter and son;
// 7, JACKAL, TIGER, JACKAL, FOX, LION, EAGLE, LION