#include "NhaCungCap.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>

using namespace std;

NhaCungCap::NhaCungCap(){};
NhaCungCap::NhaCungCap(string tenNCC, string tenSpNhap, int soLuong, double giaSanPham, string soDienThoai)
    : tenNCC(tenNCC), tenSpNhap(tenSpNhap), soLuong(soLuong), giaSanPham(giaSanPham), soDienThoai(soDienThoai){};

void NhaCungCap::themNCC(){
    NhaCungCap ncc;
    cout << "Nhap ten nha cung cap: ";
    cin.ignore();
    getline(cin, ncc.tenNCC);
    cout << "Nhap ten san pham nhap: ";
    getline(cin, ncc.tenSpNhap);
    cout << "Nhap so luong: ";
    cin >> ncc.soLuong;
    cout << "Nhap gia san pham: ";
    cin >> ncc.giaSanPham;
    cout << "Nhap so dien thoai: ";
    cin.ignore();
    getline(cin, ncc.soDienThoai);
    listNCC.push_back(ncc);
}

void NhaCungCap::xoaNCC(){
    string tenNCC;
    cout << "Nhap ten nha cung cap can xoa: ";
    cin.ignore();
    getline(cin, tenNCC);
    for(int i = 0; i < listNCC.size(); i++){
        if(listNCC[i].tenNCC == tenNCC){
            listNCC.erase(listNCC.begin() + i);
            cout << "Xoa thanh cong" << endl;
            return;
        }
    }
    cout << "Khong tim thay nha cung cap" << endl;
}

void NhaCungCap::suaNCC(){
    string tenNCC;
    cout << "Nhap ten nha cung cap can sua: ";
    cin.ignore();
    getline(cin, tenNCC);
    for(int i = 0; i < listNCC.size(); i++){
        if(listNCC[i].tenNCC == tenNCC){
            cout << "Nhap ten nha cung cap: ";
            getline(cin, listNCC[i].tenNCC);
            cout << "Nhap ten san pham nhap: ";
            getline(cin, listNCC[i].tenSpNhap);
            cout << "Nhap so luong: ";
            cin >> listNCC[i].soLuong;
            cout << "Nhap gia san pham: ";
            cin >> listNCC[i].giaSanPham;
            cout << "Nhap so dien thoai: ";
            cin.ignore();
            getline(cin, listNCC[i].soDienThoai);
            cout << "Sua thanh cong" << endl;
            return;
        }
    }
    cout << "Khong tim thay nha cung cap" << endl;
}

void NhaCungCap::timKiemNCC(){
    string tenNCC;
    cout << "Nhap ten nha cung cap can tim: ";
    cin.ignore();
    getline(cin, tenNCC);
    for(int i = 0 ; i < listNCC.size(); i++){
        if(listNCC[i].tenNCC == tenNCC){
            cout << "|  STT  |      Ten nha cung cap      |        Ten San Pham nhap      |   So luong  |   Gia San Pham   |               So Dien Thoai              |" << endl;
            hienThi(i);
    }
    cout << "Khong tim thay nha cung cap" << endl;
}

void NhaCungCap::hienThi(const int &i){
    cout << "| " << i + 1;
    int dem = 0;
    while(1) {
        if(dem < 7-to)
    }
}

void NhaCungCap::hienThiListNCC(){
    cout << "|  STT  |      Ten nha cung cap      |        Ten San Pham nhap      |   So luong  |   Gia San Pham   |               So Dien Thoai              |" << endl;
    for(int i = 0; i < listNCC.size(); i++){
        hienThi(i);
    }
}

void NhaCungCap::luuNCC(){
    ofstream file("NhaCungCap.txt");
    for(int i = 0; i < listNCC.size(); i++){
        file << listNCC[i].tenNCC << endl;
        file << listNCC[i].tenSpNhap << endl;
        file << listNCC[i].soLuong << endl;
        file << listNCC[i].giaSanPham << endl;
        file << listNCC[i].soDienThoai << endl;
    }
    cout << "Luu thanh cong" << endl;
    file.close();
}

void NhaCungCap::docNCC(){
    ifstream file("data/Nhacungcap.txt");
    string tenNCC, tenSpNhap, soDienThoai;
    double giaSanPham;
    int soLuong;
    while(!file.eof()){
        getline(file, tenNCC);
        getline(file, tenSpNhap);
        file >> soLuong;
        file >> giaSanPham;
        file.ignore();
        getline(file, soDienThoai);
        if(tenNCC != ""){
            NhaCungCap ncc(tenNCC, tenSpNhap, soLuong, giaSanPham, soDienThoai);
            listNCC.push_back(ncc);
        }
    }
    cout << "Doc thanh cong" << endl;
    file.close();
}