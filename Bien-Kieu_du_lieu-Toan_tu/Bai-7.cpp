/*
Tính lương nhân viên sau tăng ca:
Nhập lương cơ bản, số giờ tăng ca, hệ số tăng ca.
Tính lương cuối cùng = lương cơ bản + giờ tăng ca * hệ số.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double basicSal;
    int otHours;
    double otCo;
    double totalSal;

    cout << "Nhap luong co ban: ";
    cin >> basicSal;
    cout << "Nhap so gio tang ca: ";
    cin >> otHours;
    cout << "Nhap he so: ";
    cin >> otCo;

    totalSal = basicSal + otHours * otCo;
    cout << "Tong luong tang ca: " << fixed << setprecision(2) << totalSal << endl;

    system("pause");
    return 0;
}