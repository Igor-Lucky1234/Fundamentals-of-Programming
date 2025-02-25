#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "¬ведите количество элементов: ";
    cin >> n;
    int arr[n], sum = 0;

    for(int i = 0; i < n; i++) {
        cout << "¬ведите элемент " << i + 1 << ": ";
        cin >> arr[i];
        if(arr[i] > 0) sum += arr[i];
    }

    cout << "—умма положительных чисел: " << sum << endl;
	system("pause");
    return 0;
}