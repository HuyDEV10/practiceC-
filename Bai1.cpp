#include <iostream>
#include <cmath>
using namespace std;

// Hàm ki?m tra s? nguyên t?
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    char tiepTuc;
    
    do {
        int N;
        cout << "\nNhap so nguyen duong N: ";
        cin >> N;
        
        if (N <= 2) {
            cout << "Khong co so nguyen to" << endl;
        } else {
            cout << "Cac so nguyen to nho hon " << N << " la: ";
            for (int i = 2; i < N; i++) {
                if (isPrime(i)) {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
        
        cout << "\Nhap tiep tuc? (y/n): ";
        cin >> tiepTuc;
        
    } while (tiepTuc == 'y' || tiepTuc == 'Y');
    
    cout << "Bye bye!" << endl;
    return 0;
}
