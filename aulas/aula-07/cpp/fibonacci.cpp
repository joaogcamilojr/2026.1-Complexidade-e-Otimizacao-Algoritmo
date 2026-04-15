#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return n * fibonacci(n - 1);
}

int main() {
    int n;

    cout << "Digite um valor para n: ";
    cin >> n;

    cout << "Fibonacci de " << n << " = " << fibonacci(n) << endl;

    return 0;
}