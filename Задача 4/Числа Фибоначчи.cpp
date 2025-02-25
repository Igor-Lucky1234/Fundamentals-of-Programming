#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }

    cout << endl;
	system("pause");
    return 0;
}