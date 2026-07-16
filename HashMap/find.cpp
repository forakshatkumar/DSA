#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    string name;
    int marks;
    map < string, int > students;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> marks;
        students.insert({
            name,
            marks
        });
    }
    string search_name;
    cin >> search_name;

    if (students.find(search_name) != students.end()) {
        cout << "Found!" << endl;
    }
    else {
        cout << "Not Found.." << endl;
    }
    return 0;
}