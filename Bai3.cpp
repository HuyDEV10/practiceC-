#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float tb;
};

bool isValidDiem(float diem) {
    return diem >= 0 && diem <= 10;
}

int main() {
    int n;
    
    do {
        cout << "Nhap so luong sinh vien (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "So luong sinh vien phai lon hon 0. Vui long nhap lai." << endl;
        }
    } while (n <= 0);
    
    vector<SinhVien> danhSach(n);
    // Nhap thong tin cua tung sinh vien 
    for (int i = 0; i < n; i++) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        cout << "Ten: ";
        cin.ignore();
        getline(cin, danhSach[i].ten);
        
        do {
            cout << "Diem Toan: ";
            cin >> danhSach[i].toan;
            if (!isValidDiem(danhSach[i].toan)) {
                cout << "Diem phai trong khoang [0, 10]. Vui long nhap lai." << endl;
            }
        } while (!isValidDiem(danhSach[i].toan));
        
        do {
            cout << "Diem Ly : ";
            cin >> danhSach[i].ly;
            if (!isValidDiem(danhSach[i].ly)) {
                cout << "Diem phai trong khoang [0, 10]. Vui long nhap lai." << endl;
            }
        } while (!isValidDiem(danhSach[i].ly));
        
        do {
            cout << "Diem Hoa : ";
            cin >> danhSach[i].hoa;
            if (!isValidDiem(danhSach[i].hoa)) {
                cout << "Diem phai trong khoang [0, 10]. Vui long nhap lai." << endl;
            }
        } while (!isValidDiem(danhSach[i].hoa));
        
        danhSach[i].tb = (danhSach[i].toan + danhSach[i].ly + danhSach[i].hoa) / 3;
    }
    
    bool found = false;
    for (vector<SinhVien>::iterator it = danhSach.begin(); it != danhSach.end(); ++it) {
        if (it->tb >= 8) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "\nDanh sach sinh vien co diem trung binh >= 8:" << endl;
        cout << setw(20) << left << "Ten" 
             << setw(10) << right << "Toan" 
             << setw(10) << right << "Ly" 
             << setw(10) << right << "Hoa" 
             << setw(10) << right << "TB" << endl;
        
        for (vector<SinhVien>::iterator it = danhSach.begin(); it != danhSach.end(); ++it) {
            if (it->tb >= 8) {
                cout << setw(20) << left << it->ten 
                     << setw(10) << right << fixed << setprecision(1) << it->toan 
                     << setw(10) << right << fixed << setprecision(1) << it->ly 
                     << setw(10) << right << fixed << setprecision(1) << it->hoa 
                     << setw(10) << right << fixed << setprecision(1) << it->tb << endl;
            }
        }
    } else {
        cout << "\nKhong co sinh vien nao co diem trung binh >= 8" << endl;
    }
    
    return 0;
}
