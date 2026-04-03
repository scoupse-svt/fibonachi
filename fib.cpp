#include <iostream>
using namespace std;

void fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        int tmp = a + b;
        a = b;
        b = tmp;
    }
}

int main() {
    int n;
    cin >> n;
    fib(10);
}