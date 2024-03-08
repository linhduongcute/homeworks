#include <iostream>

using namespace std;

int main() {
    int FindNumber;
    cin >> FindNumber;
    int SoPhanTu;
    cin >> SoPhanTu;
    int mang[SoPhanTu];
    for (int i=0; i<SoPhanTu; i++) {
        cin >> mang[i];
    }
    int low = 0, high = SoPhanTu-1;
    int mid = (low+high)/2;
    while (low<=high) {
        if (mang[mid] == FindNumber)
        {cout << "Vi Tri Phan Tu La: " << mid; return 0;}
        else if (mid>FindNumber) high = mid-1;
        else low = mid+1;
    }
    cout << "Does not Exist " << endl;
    return 0;
}
