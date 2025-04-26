#include <iostream>
using namespace std;

void inFibonacci(int N) {
    if (N <= 1) {
        cout << "Khong co so Fibonacci nao nho hon " << N << endl;
        return;
    }

    cout << "Day Fibonacci nho hon " << N << " la: ";
    int a = 0, b = 1;
    cout << a << " " << b << " "; // In 2 s? ð?u tiên

    while (true) {
        int next = a + b;
        if (next >= N) break;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int N;
    char tiepTuc;

    do {
        // V?ng l?p nh?p N v?i ði?u ki?n N <= 30
        do {
            cout << "\nNhap so nguyen duong N (N <= 30): ";
            cin >> N;
            
            if (N <= 0) {
                cout << "N phai la so nguyen duong. Vui long nhap lai." << endl;
            }
            else if (N > 30) {
                cout << "N phai nho hon hoac bang 30. Vui long nhap lai." << endl;
            }
        } while (N <= 0 || N > 30); // L?p l?i n?u N không h?p l?

        inFibonacci(N);

        cout << "\nBan co muon tiep tuc? (y/n): ";
        cin >> tiepTuc;
    } while (tiepTuc == 'y' || tiepTuc == 'Y');

    cout << "Cam on ban da su dung chuong trinh!" << endl;
    return 0;
}
