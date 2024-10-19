#include "QLNV.h"
#include <iostream>

using namespace std;

int main() {
    int choice;
    do {
        cout << "1. Quan ly nhan vien" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                QLNhanVienmenu();
                break;
            case 0:               
                cout << "Ket thuc chuong trinh" << endl;
                break;
            default:
                cout << "Nhap sai, vui long nhap lai" << endl;
                break;
        }
    } while (choice != 0);

}