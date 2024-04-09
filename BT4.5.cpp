#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int a[n], b[n+1];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n+1; i++) {
        cin >> b[i];
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) swap(a[i], a[j]);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n+1; j++) {
            if (b[i]>b[j]) swap(b[i], b[j]);
        }
    }
    for (int i=0; i<n; i++) {
        if ( a[i] != b[i] ) {cout << b[i]; return 0;}
    }
    cout << b[n];
    return 0;
}
