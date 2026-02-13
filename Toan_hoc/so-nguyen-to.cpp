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

int main() {
    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;
    if(isPrime(num)) {
        cout << num << " la so nguyen to!" << endl; 
    }
    else {
         cout << num << " khong phai la so nguyen to!" << endl; 
    }
    system("pause");
    return 0;
}