#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int i=0;
    while (i<n)
    {
        cin >> arr[i];
        i++;
    }
    int q, temp;
    cin >> q;
    string s[q];
    int ind[q];
    int index=0;
    i=0;
    while (i<q)
    {
        cin >> temp;
        int j=0;
        while (arr[j]<temp) j++;
        if (arr[j]==temp) s[index]="Yes";
        else s[index] = "No";
        ind[index] = j+1;
        index++;
        i++;
    }
    i=0;
    while (i<q)
    {
        cout << s[i] << " " << ind[i] << endl;
        i++;
    }
    return 0;
}
