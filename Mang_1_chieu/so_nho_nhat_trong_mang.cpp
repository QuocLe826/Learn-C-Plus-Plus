#include <iostream>
using namespace std;

long double findMax(long double arr[], int n) {
    long double max_val = arr[0];
    for(int i = 0; i < n; i++) {
        if(arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

void input(long double arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
}

int main() {

    int quantity;
    cout << "Nhap so luong phan tu: ";
    cin >> quantity;
    long double arr[quantity];
    input(arr, quantity);
    cout << "So lon nhat trong mang: " << findMax(arr, quantity) << endl;

    system("pause");
    return 0;
}