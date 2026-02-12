/*
Tính tổng, hiệu, tích, thương 3 số:
Nhập 3 số nguyên từ bàn phím.
Tính tổng, hiệu, tích, chia lấy nguyên và in kết quả.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num_1;
    int num_2;
    int num_3;

    cout << "Nhap 3 so: ";
    cin >> num_1 >> num_2 >> num_3;

    cout << "Tong: " << num_1 + num_2 + num_3 << endl;
    cout << "Hieu: " << num_1 - num_2 - num_3 << endl;
    cout << "Tich: " << num_1 * num_2 * num_3 << endl;
    if(num_2 == 0 || num_3 == 0) {
        cerr << "Loi: Khong the chia cho 0!" << endl;
        return -1;
    }
    else {
        cout << "Thuong: " << fixed << setprecision(3) << (float) num_1 / num_2 / num_3 << endl;
    }
    system("pause");
    return 0;
}