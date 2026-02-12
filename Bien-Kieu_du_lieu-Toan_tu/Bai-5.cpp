#include <iostream>
#include <limits>
using namespace std;

const int MAX_STUDENTS = 30;

int main() {

    int numStudnt;
    do {
        cout << "Nhap so hoc sinh hien co: ";
        cin >> numStudnt;
        if(numStudnt < 0) {
            cerr << "Loi: So hoc sinh phai lon hon 0!" << endl;
        }
    } while (numStudnt < 0);
    cout << "So ghe con trong: " << MAX_STUDENTS - numStudnt << " ghe" << endl;

    system("pause");
    return 0;
}