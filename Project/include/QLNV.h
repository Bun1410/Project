#ifndef QLNV_H
#define QLNV_H

#include <string>
#include <iostream>
#include "NhanVien.h"

using namespace std;

void QLNhanVienmenu() {
    NhanVien nv;
    int choice;
    do {
        cout << "1.Them thong tin nhan vien" << endl;
        cout << "2.Xoa nhan vien" << endl;
        cout << "3.Sua thong tin nhan vien" << endl;
        cout << "4.Hien thi danh sach vien" << endl;
        cout << "5.Tim kiem nhan vien" << endl;
        cout << "6.Luu danh sach nhan vien" << endl;
        cout << "0.Thoat" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                nv.ThemNhanVien();
                break;
          case 2:
                nv.XoaNhanVien();
                break;
            case 3:
                nv.SuaNhanVien();
                break;
            case 4:
                nv.HienThiDanhSachNhanVien();
                break;
            case 5:
                nv.TimKiemNhanVien();
                break;
            case 6:
                nv.LuuNhanVien();
                break;
            case 0:
                cout << "Ket thuc chuong trinh" << endl;
                break;
            default:
                cout << "Lua chon khong hop le" << endl;
                break;
        }
    } while (choice != 0);
}

#endif // !QuanLyNhanVien_H
