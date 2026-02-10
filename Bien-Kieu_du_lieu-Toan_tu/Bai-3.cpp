/*
Tính lương nhân viên:
Nhập số giờ làm, lương theo giờ.
Khai báo hằng số TAX_RATE = 0.1.
Tính lương thực nhận sau thuế và in kết quả.
*/

/*

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const float TAX_RATE = 0.1;

int main() {
    string employeeName;
    float workingHours;
    float salaryOfHour;
    float totalSalary;

    cout << "Nhap ten nhan vien: ";
    getline(cin, employeeName);
    cout << "Nhap so gio lam: ";
    cin >> workingHours;
    cout << "Nhap luong theo gio: ";
    cin >> salaryOfHour;

    totalSalary = workingHours * salaryOfHour * TAX_RATE;
    cout << setw(20) << setfill('-') << "" << endl;
    cout << "Ho ten nhan vien: " << employeeName << endl;
    cout << "So gio lam: " << workingHours << "h" << endl;
    cout << "Luong theo gio: " << salaryOfHour << " dong" << endl;

    //Lỗi gặp phải: xuất ra ko hiển thị phần thập phân hoặc hiện ko đủ => dùng fixed và setprecision
    cout << "Tong luong nhan duoc: " << totalSalary << " dong" << endl;

    system("pause");
    return 0;
}