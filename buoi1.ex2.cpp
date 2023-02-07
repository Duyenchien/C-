#include <iostream>
#include <cmath>
 
using namespace std;
 
/**
 * Phan tich so nguyen n thanh tich cac thua so nguyen to
 */
void phanTichSoNguyen(int n) {
    int i = 2;
    int dem = 0;
    int a[100];
    // phan tich
    while (n > 1) {
        if (n % i == 0) {
            n = n / i;
            a[dem++] = i;
        } else {
            i++;
        }
    }
    // neu dem = 0 thi n la nguyen to
    if (dem == 0) {
        a[dem++] = n;
    }
    // in ket qua ra man hinh
    for (i = 0; i < dem - 1; i++) {
        cout<<" "<<a[i];
    }
    cout<<" "<< a[dem - 1];
    for (int i = 1; i < n; i++){
        if (max < a[i])
            max = a[i];
        cout<<"So lon nhat la: "<<max;
            }
}
 
/**
 * Ham main
 */
int main() {
 int n;
    cout << "Nhap so nguyen duong n = ";
    cin >> n;
    // phan tich so nguyen duong n
    phanTichSoNguyen(n);
}
