#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int n, target;
    cout << "Введите количество элементов: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Введите число для поиска: ";
    cin >> target;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            break;
        }
    }

    if(found) cout << "Число найдено." << endl;
    else cout << "Число не найдено." << endl;
	system("pause");
    return 0;
}