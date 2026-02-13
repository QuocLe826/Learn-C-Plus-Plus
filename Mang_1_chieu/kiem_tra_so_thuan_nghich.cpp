#include <iostream>
using namespace std;

int checkReversible(int n) {
    int rev = 0;
    int tmp = n;
    while (n != 0) {
        rev = rev  * 10 + n % 10;
        n /= 10;
    }
    return rev == tmp;
}

void input(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void output(int arr[], int n) {
    cout << "Cac so thuan nghich trong mang: ";
    for(int i = 0; i < n; i++) {
        if(checkReversible(arr[i])) {
            cout << arr[i] << " ";
        }
    }
}

int main() {

    int quantity;
    cout << "Nhap so luong phan tu: ";
    cin >> quantity;
    int arr[quantity];
    input(arr, quantity);
    output(arr, quantity);

    system("pause");
    return 0;
}