#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Nhập vào mảng các giá trị cần tìm UCLN
    cout << "Nhap vao so gia tri ban can tim uoc chung lon nhat: ";
    int soGiaTri;
    cin >> soGiaTri;
    int Arr[soGiaTri];
    for (int i = 0; i<soGiaTri; i++) { cin >> Arr[i];}
    // sắp xếp mảng theo chiều tăng dần
    for (int i=0; i<soGiaTri-1; i++) {
        for (int j=i+1; j<soGiaTri; j++) {
            if (Arr[i]>Arr[j]) swap(Arr[i],Arr[j]);
        }
    }
    // tìm các ước của phần tử nhỏ nhất trong mảng
    vector<int> UCTT;
    int i=1;
    while (i<=Arr[0]) {
        if (Arr[0] % i == 0) {
            UCTT.push_back(i);
        }
        ++i;
    }
    // tìm UCLN của mảng
    int len = UCTT.size();
    int UCLN = UCTT[len-1];
    for (int i=0 ; i<soGiaTri ; i++) {
        for (int j=len-1; j>=0 ; --j) {
            if (Arr[i] % UCTT[j] != 0) UCLN=UCTT[j-1];
            else break;
        }
    }
    cout << "UCLN la: " <<UCLN;
    return 0;
}
