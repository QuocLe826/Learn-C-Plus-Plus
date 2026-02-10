/*
Thông tin cá nhân:
Khai báo biến name (string), age (int), height (float)
In ra thông tin theo dạng: "Tên: …, Tuổi: …, Chiều cao: …m".
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int age;
    float heigth;

    cout << "Nhap ten: ";
    getline(cin, name);
    cout << "Nhap tuoi: ";
    cin >> age;
    cout << "Nhap chieu cao: ";
    cin >> heigth;

    cout << setw(20) << setfill('-') << "" << endl;
    cout << "Ho ten: " << name << endl;
    cout << "Tuoi: " << age << " tuoi" << endl;
    cout << "Chieu cao: " << fixed << setprecision(2) << heigth << "m" << endl;
    cout << setw(20) << setfill('-') << "" << endl;

    system("pause");
    return 0;
}