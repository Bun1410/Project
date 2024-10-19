#include"NhanVien.h"
#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

NhanVien::NhanVien(){};
NhanVien::NhanVien(string maNhanVien, string soDienThoai, string hoTen, string email, string ngaySinh)
    : maNhanVien(maNhanVien), soDienThoai(soDienThoai), hoTen(hoTen), email(email), ngaySinh(ngaySinh) {};

void NhanVien::ThemNhanVien() {
    cout << "Nhap ma nhan vien: ";
    cin >> maNhanVien;
    cout << "Nhap so dien thoai: ";
    cin >> soDienThoai;
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin,hoTen);
    cout << "Nhap email: ";
    getline(cin,email);
    cout << "Nhap ngay sinh: ";
    getline(cin,ngaySinh);
    NhanVien* nv = new NhanVien(maNhanVien, soDienThoai, hoTen, email, ngaySinh);

    danhSachNhanVien.push_back(*nv);
}
void NhanVien::XoaNhanVien() {
    string maNhanVien;
    cout << "Nhap ma nhan vien can xoa: ";
    cin >> maNhanVien;
    for (int i = 0; i < danhSachNhanVien.size(); i++) {
        if (danhSachNhanVien[i].maNhanVien == maNhanVien) {
            danhSachNhanVien.erase(danhSachNhanVien.begin() + i);
            cout << "Xoa thanh cong" << endl;
            return;
        }
    }
    cout << "Khong tim thay nhan vien" << endl;
}
void NhanVien::SuaNhanVien() {
    string maNhanVien;
    cout << "Nhap ma nhan vien can sua: ";
    cin >> maNhanVien;
    for (int i = 0; i < danhSachNhanVien.size(); i++) {
        if (danhSachNhanVien[i].maNhanVien == maNhanVien) {
            cout << "Nhap so dien thoai: ";
            cin >> danhSachNhanVien[i].soDienThoai;
            cout << "Nhap ho ten: ";
            cin >> danhSachNhanVien[i].hoTen;
            cout << "Nhap email: ";
            cin >> danhSachNhanVien[i].email;
            cout << "Nhap ngay sinh: ";
            cin >> danhSachNhanVien[i].ngaySinh;
            cout << "Sua nhan vien thanh cong" << endl;
            return;
        }
    }
    cout << "Khong tim thay nhan vien" << endl;
}
// căn lề chưa chuẩn lắm
void NhanVien::TimKiemNhanVien() {
    string maNhanVien;
    cout << "Nhap ma nhan vien can tim: ";
    cin >> maNhanVien;
    for (int i = 0; i < danhSachNhanVien.size(); i++) {
       
        if (danhSachNhanVien[i].maNhanVien == maNhanVien) {
            cout << "| STT | Ma nhan vien |    So dien thoai    |         Ho ten        |            Email           |     Ngay sinh    |" << endl;
            HienThi(i);
            return;
        }
    }
    cout << "Khong tim thay nhan vien" << endl;
}
// căn lề chưa chuẩn lắm
void NhanVien::HienThi(const int& i) {
    cout <<"| " << i+1 ;
    int dem =0 ;
    while(1){
        if(dem<4-to_string(i+1).length()){
            cout << " ";
            dem++;
        }
        else break;
    }
    cout << "| " << danhSachNhanVien[i].maNhanVien;
    for(int j = 0; j < 15 - danhSachNhanVien[i].maNhanVien.length(); j++){
        cout << " ";
    }
    cout << "| " << danhSachNhanVien[i].soDienThoai;
    for(int j = 0; j < 20 - danhSachNhanVien[i].soDienThoai.length(); j++){
        cout << " ";
    }
    cout << "| " << danhSachNhanVien[i].hoTen;
    for(int j = 0; j < 25 - danhSachNhanVien[i].hoTen.length(); j++){
        cout << " ";
    }
    cout << "| " << danhSachNhanVien[i].email;
    for(int j = 0; j < 30 - danhSachNhanVien[i].email.length(); j++){
        cout << " ";
    }
    cout << "| " << danhSachNhanVien[i].ngaySinh;
    for(int j = 0; j < 15 - danhSachNhanVien[i].ngaySinh.length(); j++){
        cout << " ";
    }
    cout << "|" << endl;

}
void NhanVien::HienThiDanhSachNhanVien() {
    cout << "| STT | Ma nhan vien |    So dien thoai    |         Ho ten        |            Email           |     Ngay sinh    |" << endl;
    for (int i = 0; i < danhSachNhanVien.size(); i++) {
        HienThi(i);
    }
}

void NhanVien::LuuNhanVien() {
    ofstream file("data/NhanVien.txt");
    for (int i = 0; i < danhSachNhanVien.size(); i++) {
        file << danhSachNhanVien[i].maNhanVien << ";";
        file << danhSachNhanVien[i].soDienThoai << ";";
        file << danhSachNhanVien[i].hoTen << ";";
        file << danhSachNhanVien[i].email << ";";
        file << danhSachNhanVien[i].ngaySinh << endl;
    }
    cout << "Luu file thanh cong" << endl;
    file.close();
}

// đang chưa đọc được file có sẵn
void NhanVien:: DocNhanVien(){
    ifstream file("data/NhanVien.txt");
    while(file.good()){
        getline(file, maNhanVien, ';');
        getline(file, soDienThoai, ';');
        getline(file, hoTen, ';');
        getline(file, email, ';');
        getline(file, ngaySinh, '\n');
        if(maNhanVien != ""){
            
        NhanVien nv(maNhanVien, soDienThoai, hoTen, email, ngaySinh);
        danhSachNhanVien.push_back(nv);
      }
    }
      cout << "Doc file thanh cong" << endl;
    file.close();
    } 
