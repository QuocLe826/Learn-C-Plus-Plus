#include <iostream>
#include <math.h>
using namespace std;


int isPrime(int num) {
    if(num < 2) {
        return 0;
    }
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return 0;
        }
    }
    return 1;
}
void input(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
        cin >> arr[i];
    }
}

void output(int arr[], int n) {
    cout << "Cac so nguyen to trong mang la: ";
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
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