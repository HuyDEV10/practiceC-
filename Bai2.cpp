#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    
    do {
        cout << "Nhap n (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "n phai lon hon 0. Vui long nhap lai." << endl;
        }
    } while (n <= 0);
    
    int arr[n];
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int maxDivisibleBy3 = INT_MIN;
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] > maxDivisibleBy3) {
            maxDivisibleBy3 = arr[i];
            found = true;
        }
    }
    
    if (found) {
        cout << "So lon nhat chia het cho 3 la: " << maxDivisibleBy3 << endl;
    } else {
        cout << "Khong co" << endl;
    }
    
    return 0;
}
