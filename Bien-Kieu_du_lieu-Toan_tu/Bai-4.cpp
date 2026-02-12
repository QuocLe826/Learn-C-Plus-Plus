/*
Chuyển đổi độ C sang độ F:
Nhập nhiệt độ C.
Hằng số FACTOR = 9.0/5, OFFSET = 32.
Tính F = C*FACTOR + OFFSET và in ra.
*/

#include <iostream>
using namespace std;

const float FACTOR = 9.0 / 5;
const int OFFSET = 32;

int main() {
    int celsius;
    float fahrenheit;

    do {
        cout << "Nhap do C: ";
        cin >> celsius;
        if(celsius < 0) {
            cerr << "Loi: do C phai lon hon 0" << endl;
        }
    } while(celsius <= 0);
    fahrenheit = celsius * FACTOR + OFFSET;
    cout << celsius << "(C) = " << fahrenheit << "(F)" << endl;

    system("pause");
    return 0;
}