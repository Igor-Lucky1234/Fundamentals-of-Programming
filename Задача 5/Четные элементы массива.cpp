#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Четные элементы: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) cout << arr[i] << " ";
    }

    cout << endl;
	system("pause");
    return 0;
}