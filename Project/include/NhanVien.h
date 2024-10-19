#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>
#include <iostream>
#include <vector>

using namespace std;

class NhanVien{
private:
    string maNhanVien;
    string soDienThoai;
    string hoTen;
    string email;
    string ngaySinh;
    vector<NhanVien> danhSachNhanVien;

public:
    NhanVien();
    NhanVien(string maNhanVien, string soDienThoai, string hoTen, string email, string ngaySinh);
    void ThemNhanVien();
    void XoaNhanVien();
    void SuaNhanVien();
    void TimKiemNhanVien();
    void HienThiDanhSachNhanVien();
    void LuuNhanVien();
    void DocNhanVien();
    void HienThi(const int& i);
};

#endif // NHANVIEN_H