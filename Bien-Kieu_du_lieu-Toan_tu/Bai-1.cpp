/*
Tính diện tích hình chữ nhật:
Khai báo biến length và width (float).
Khai báo hằng số PI = 3.14159.
Tính diện tích và in ra màn hình.
*/

/*/

Lỗi có thể xảy ra:
1. Chiều dài < chiều rộng
2. width hoặc length là số âm
3. width hoặc length không phải là số
4. system("pause") chỉ hoạt động trên windows

*/

#include <iostream>
using namespace std;

const float PI = 3.14;

int main() {
    float width; // chiều dài
    float height; // chiều rộng
    float result;

    cout << "Nhap chieu dai(cm): ";
    cin >> width;
    cout << "Nhap chieu rong(cm): ";
    cin >> height;
    if(cin.fail()) {
        cerr << "Loi: du lieu nhap vao khong phai la so!" << endl;
        return -1;
    }
    else if(width < height) {
        cerr << "Loi: Chieu dai phai lon hon chieu rong!" << endl;
        return -1;
    }
    else if(width < 0 || height < 0) {
        cerr << "Loi: Chieu dai va chieu rong khong the la so am!" << endl;
        return -1;
    }
    result = width * height;
    cout << "Dien tich hinh chu nhat: " << result << " cm" << endl;

    system("pause");
    return 0;
}