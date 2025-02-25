#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    srand(time(0));
    int n, threshold, count = 0;
    cout << "Введите количество элементов: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    cout << "\nВведите число для сравнения: ";
    cin >> threshold;

    for(int i = 0; i < n; i++) {
        if(arr[i] > threshold) count++;
    }

    cout << "Количество элементов, превышающих " << threshold << ": " << count << endl;
	system("pause");
    return 0;
}