#include <iostream>
#include <string>
using namespace std;

bool isVPS (string s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            count++;
        } else if (s[i] == ')') {
            count--;
        }
        if (count < 0) {
            return false;
        }
    }
    if (count == 0) {
        return true;
    } else {
        return false;
    }
}


int main() {
    int num;
    string s;
    cin >> num;

    for(int i = 0; i < num; i++) {
        cin >> s;
        if (isVPS(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}