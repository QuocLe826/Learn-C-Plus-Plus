#include <iostream>
#include <math.h>
using namespace std;

int checkSquareNumber(int num) {
    int can = sqrt(num);
    if(can * can == num) {
        return 1;
    }
    return 0;
}

int main() {

    int num;
    cout << "Nhap so nguyen: ";
    cin >> num;
    if(checkSquareNumber(num)) {
        cout << num << " la so chinh phuong" << endl;
    }
    else {
        cout << num << " khong phai la so chinh phuong" << endl;
    }

    system("pause");
    return 0;
}