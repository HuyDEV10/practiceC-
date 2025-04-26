#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;

    do {
        cout << "Nhap so luong phan tu (n > 0): ";
        cin >> n;
        if (n <= 0) {
            cout << "So luong phan tu phai lon hon 0. Vui long nhap lai." << endl;
        }
    } while (n <= 0);
    
    vector<int> arr(n);
    cout << "Nhap " << n << " so nguyen: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr.begin(), arr.end());
    
    int count = 0;
    if (n > 0) {
        count = 1; 
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[i-1]) {
                count++;
            }
        }
    }
    
    cout << "So luong gia tri phan biet trong mang: " << count << endl;
    
    return 0;
}
