#include <iostream>
using namespace std;

void fibonacci(int n) {
    int fib = 0;
    int first = 0, second = 1;

    for(int i=1; i<n; i++) {    //calculate fibonacci
        fib = first + second;
        first = second;
        second = fib;
    }
    
    if(n==0) {
        first = 1;
        second = 0;
    }

    cout << first << " " << second << endl;
}

int main() {
    int num, n;
    cin >> num;

    for(int i=0; i<num; i++) {
        cin >> n;
        fibonacci(n);
    }

    return 0;
}