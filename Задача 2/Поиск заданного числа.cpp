#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    int n, target;
    cout << "������� ���������� ���������: ";
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "������� ������� " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "������� ����� ��� ������: ";
    cin >> target;
    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            found = true;
            break;
        }
    }

    if(found) cout << "����� �������." << endl;
    else cout << "����� �� �������." << endl;
	system("pause");
    return 0;
}